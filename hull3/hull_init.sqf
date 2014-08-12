#include "hull_macros.h"

[] call hull_common_fnc_missionSettings;
[] call hull_mission_fnc_init;

if (!isDedicated) then {
    [] spawn hull_unit_fnc_playerInit;
    if (isServer) then {
        [] call hull_mission_fnc_addServerEHs;
        [] spawn hull_mission_fnc_broadcastEnviroment;
        [] spawn hull_mission_fnc_serverSafetyTimerLoop;
        [hull_gear_fnc_tryAssignRadios] spawn hull_unit_fnc_foreachNonPlayerUnits;
    };
} else {
    [] call hull_mission_fnc_addServerEHs;
    [] spawn hull_mission_fnc_broadcastEnviroment;
    [] spawn hull_mission_fnc_serverSafetyTimerLoop;
    [hull_gear_fnc_tryAssignRadios] spawn hull_unit_fnc_foreachNonPlayerUnits;
};