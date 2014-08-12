#include "hull_macros.h"

#define HULL_MARKER_MEDIC_SIZE              [0.5, 0.5]
#define HULL_MARKER_FIRETEAM_SIZE           [0.6, 0.6]
#define HULL_MARKER_FIRETEAM_COLOR          "ColorYellow"

#define HULL_MARKER_CUSTOM_DEFAULT_SHAPE    "ICON"
#define HULL_MARKER_CUSTOM_DEFAULT_TYPE     "flag_Hungary"
#define HULL_MARKER_CUSTOM_DEFAULT_COLOR    "Default"
#define HULL_MARKER_CUSTOM_DEFAULT_SIZE     [1, 1]


hull_marker_fnc_preInit = {
    if (!isDedicated) then {
        hull_marker_rawMarkers = [];
        hull_marker_groups = [];
        hull_marker_medics = [];
        hull_marker_fireTeam = [];
        hull_marker_custom = [];
        hull_marker_defaultDelay = 4;
    };
};

hull_marker_fnc_initMarker = {
    FUN_ARGS_3(_unit,_markerText,_markerColor);

    PUSH(hull_marker_rawMarkers, AS_ARRAY_4(_unit,_unit getVariable "hull_gear_class",_markerText,_markerColor));
};

hull_marker_fnc_addMarkers = {
    {
        if (side player == side (_x select 0)) then {
            _x call hull_marker_fnc_addMarker;
        };
    } foreach hull_marker_rawMarkers;
    hull_marker_rawMarkers = nil;
    [player] call hull_marker_fnc_addFireTeamMarkers;
    ["marker.group.created", []] call hull_event_fnc_emitEvent;
};

hull_marker_fnc_addMarker = {
    FUN_ARGS_4(_unit,_gearClass,_markerText,_markerColor);

    private "_markerName";
    call {
        if (toLower _gearClass == "ftl") exitWith {
            [_unit, "b_inf", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "medic") exitWith {
            [_unit, "b_med", _markerText, _markerColor] call hull_marker_fnc_addMedicMarker;
        };
        if (toLower _gearClass == "sl") exitWith {
            [_unit, "b_hq", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "co") exitWith {
            [_unit, "b_hq", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "p") exitWith {
            [_unit, "b_air", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "vc") exitWith {
            [_unit, "b_armor", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "eng") exitWith {
            [_unit, "b_maint", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "matg") exitWith {
            [_unit, "b_inf", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "hatg") exitWith {
            [_unit, "b_inf", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        if (toLower _gearClass == "mmgg") exitWith {
            [_unit, "b_inf", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
        };
        [_unit, "b_unknown", _markerText, _markerColor] call hull_marker_fnc_addGroupMarker;
    };
};

hull_marker_fnc_addGroupMarker = {
    FUN_ARGS_4(_unit,_markerClassName,_markerText,_markerColor);

    (group _unit) setGroupId [_markerText];
    _markerName = format ["hull_marker_group_%1_%2", _markerText, group _unit];
    [_markerName, getPosATL _unit, "ICON", _markerClassName, _markerColor, _markerText] call hull_marker_fnc_createMarker;
    (group _unit) setVariable ["hull_marker_group", _markerName, false];
    PUSH(hull_marker_groups,group _unit);
};

hull_marker_fnc_addMedicMarker = {
    _markerName = format ["hull_marker_medic_%1_%2", _markerText, _unit];
    [_markerName, getPosATL _unit, "ICON", "b_med", _markerColor, _markerText, HULL_MARKER_MEDIC_SIZE] call hull_marker_fnc_createMarker;
    _unit setVariable ["hull_marker_medic", _markerName, false];
    PUSH(hull_marker_medics,_unit);  
};

hull_marker_fnc_updateAllMarkers = {
    waitUntil {
        [hull_marker_groups] call hull_marker_fnc_updateGroupMarkers;
        [hull_marker_medics] call hull_marker_fnc_updateMedicMarkers;
        [hull_marker_fireTeam] call hull_marker_fnc_updateFireTeamMarkers;
        sleep hull_marker_defaultDelay;
        false;
    };
};

hull_marker_fnc_updateCustomMarkers = {
    waitUntil {
        {
            _x call hull_marker_fnc_updateCustomMarker;
        } foreach hull_marker_custom;
        sleep 1;
        false;
    };
};

hull_marker_fnc_updateGroupMarkers = {
    FUN_ARGS_1(_groups);

    {
        private ["_group", "_markerName"];
        _group = _x;
        _markerName = _group getVariable "hull_marker_group";
        if ({alive _x} count units _group > 0) then {
            _markerName setMarkerPosLocal getPosASL leader _group;
        }
    } foreach _groups;
};

hull_marker_fnc_updateMedicMarkers = {
    FUN_ARGS_1(_medics);

    {
        private ["_medic", "_markerName"];
        _medic = _x;
        _markerName = _medic getVariable "hull_marker_medic";
        if (alive _medic) then {
            _markerName setMarkerPosLocal getPosASL _medic;
        }
    } foreach _medics;
};

hull_marker_fnc_updateFireTeamMarkers = {
    FUN_ARGS_1(_fireTeam);

    {
        private ["_unit", "_markerName"];
        _unit = _x;
        _markerName = _unit getVariable "hull_marker_fireTeam";
        if (alive _unit) then {
            _markerName setMarkerPosLocal getPosASL _unit;
            _markerName setMarkerDirLocal getDir _unit;
        }
    } foreach _fireTeam;
};

hull_marker_fnc_updateCustomMarker = {
    FUN_ARGS_5(_markerName,_isActive,_lastUpdate,_object,_delay);

    if (_isActive && {alive _object} && {time - _lastUpdate >= _delay}) then {
        _markerName setMarkerPosLocal getPosASL _object;
        _this set [2, time];
    };
};

hull_marker_fnc_addFireTeamMarkers = {
    FUN_ARGS_1(_unit);

    {
        [_x] call hull_marker_fnc_addFireTeamMarker;
    } foreach (units group _unit);
};

hull_marker_fnc_addFireTeamMarker = {
    FUN_ARGS_1(_unit);

    _markerName = format ["hull_marker_fireTeam_%1", _unit];
    [_markerName, getPosATL _unit, "ICON", "mil_triangle", HULL_MARKER_FIRETEAM_COLOR, "", HULL_MARKER_FIRETEAM_SIZE] call hull_marker_fnc_createMarker;
    _unit setVariable ["hull_marker_fireTeam", _markerName];
    PUSH(hull_marker_fireTeam,_unit);
};

hull_marker_fnc_addCustomMarker = {
    FUN_ARGS_1(_object);

    private ["_delay", "_shape", "_type", "_color", "_size", "_text", "_markerIndex", "_markerName"];
    if (count _this < 7) then {_text = ""}                                  else {_text  = _this select 6};
    if (count _this < 6) then {_size = HULL_MARKER_CUSTOM_DEFAULT_SIZE}     else {_size  = _this select 5};
    if (count _this < 5) then {_color = HULL_MARKER_CUSTOM_DEFAULT_COLOR}   else {_color = _this select 4};
    if (count _this < 4) then {_type = HULL_MARKER_CUSTOM_DEFAULT_TYPE}     else {_type  = _this select 3};
    if (count _this < 3) then {_shape = HULL_MARKER_CUSTOM_DEFAULT_SHAPE}   else {_shape = _this select 2};
    if (count _this < 2) then {_delay = hull_marker_defaultDelay}           else {_delay = _this select 1};
    _markerIndex = count hull_marker_custom;
    _markerName = format ["hull_marker_custom_%1", _markerIndex];
    [_markerName, getPosATL _object, _shape, _type, _color, _text, _size] call hull_marker_fnc_createMarker;
    PUSH(hull_marker_custom,AS_ARRAY_5(_markerName,true,time,_object,_delay));

    _markerIndex;
};

hull_marker_fnc_deactivateCustomMarker = {
    FUN_ARGS_1(_markerIndex);

    if (count hull_marker_custom > _markerIndex) then {
        (hull_marker_custom select _markerIndex) set [1, fale];
    };
};

hull_marker_fnc_activateCustomMarker = {
    FUN_ARGS_1(_markerIndex);

    if (count hull_marker_custom > _markerIndex) then {
        (hull_marker_custom select _markerIndex) set [1, true];
    };
};

hull_marker_fnc_deleteCustomMarker = {
    FUN_ARGS_1(_markerIndex);

    if (count hull_marker_custom > _markerIndex) then {
        DECLARE(_markerData) = hull_marker_custom select _markerIndex;
        deleteMarkerLocal  (_markerData select 0);
        _markerData set [1, false];
    };
};

hull_marker_fnc_createMarker = {
    FUN_ARGS_7(_name,_position,_shape,_type,_color,_text,_size);

    createMarkerLocal [_name, _position];
    _name setMarkerShapeLocal _shape;
    _name setMarkerTypeLocal _type;
    _name setMarkerColorLocal _color;
    _name setMarkerTextLocal _text;
    if (!isNil "_size") then {
        _name setMarkerSizeLocal _size;
    };

    _name;
};