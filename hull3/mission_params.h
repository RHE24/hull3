class MissionParams {
    // Date YYYY-MM-DD
    date[] = {
        {2014, 1, 24}, // New Moon
        {2014, 1, 31} // Full Moon
    };

    // Time HH24:mm
    time[] = {
        {4, 50}, // Dawn
        {5, 50}, // Early Morning
        {9, 0}, // Morning
        {12, 0}, // Noon
        {15, 0}, // Afternoon
        {17, 50}, // Evening
        {18, 50}, // Dusk
        {0, 0} // Night
    };

    // Fog Strength, Decay, Base
    fog[] = {
        {0,     0,      0}, // Light
        {0.2,   0,      0}, // Medium
        {0.4,   0,      0} // Heavy
    };

    // Overcast, Rain, Rainbow, Lightnings, Wind Strength, Wind Gusts, Waves, Humidity
    weather[] = {
        {-1}, // Random
        {0,     0,      0,      0,      0,      0,      0,      0}, // Clear (Calm)
        {0.01,  0,      0,      0,      0.25,   0.5,    0.25,   0.2}, // Clear (Light Winds)
        {0.01,  0,      0,      0,      0.75,   1,      0.75,   0.2}, // Clear (Stong Winds)
        {0.8,   0,      0,      0,      0,      0,      0.1,    0.2}, // Overcast (Calm)
        {0.8,   0,      0,      0,      0.25,   0.5,    0.25,   0.2}, // Overcast (Light Winds)
        {0.8,   0,      0,      0,      0.75,   1,      0.75,   0.2}, // Overcast (Strong Winds)
        {1,     1,      0,      0,      0.25,   0.5,    0.75,   0.9}, // Rain (Light Winds)
        {1,     1,      0,      0,      0.75,   1,      0.75,   0.9}, // Rain (Strong Winds)
        {1,     1,      0,      1,      1,      1,      1,      1}, // Storm
    };
};