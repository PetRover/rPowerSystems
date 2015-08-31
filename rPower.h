//
// Created by Bryce Carter on 8/25/15.
//

#ifndef FIRMWARE_POWER_H
#define FIRMWARE_POWER_H

namespace  RVR
{
    enum RailName
    {
        RAIL12V0,
        RAIL5V0,
        RAIL3V3
    };

    // A class that allows control of the a individual power rail (net)
    class PowerRail
    {

    };

    // A class that manages the power rails for a system and provides power rail objects to users
    class PowerManager
    {
    private:
        static PowerRail* rail12v0;
        static PowerRail* rail5v0;
        static PowerRail* rail3v3;
    public:
        static PowerRail* getRail(RailName railName);

    };


}

#endif //FIRMWARE_POWER_H
