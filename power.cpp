//
// Created by Bryce Carter on 8/25/15.
//

#include "rPower.h"
#include <string>
#include <stdio.h>

namespace RVR
{

    PowerRail* PowerManager::getRail(RailName railName) {
        switch (railName)
        {
            case RVR::RAIL12V0:
                return rail12v0;
            case RVR::RAIL5V0:
                return rail5v0;
            case RVR::RAIL3V3:
                return rail3v3;
        }
    }

    int PowerRail::EnableRail(RailName railName){
        // set gpio for enable to high
        switch (railName)
        {
            case RVR::RAIL12V0:
                printf("Enable 12 volt rail not implemented");
                //EN_12V
                break;
            case RVR::RAIL5V0:
                printf("Enable 5 volt rail not implemented");
                //EN_5V
                break;
            case RVR::RAIL3V3:
                printf("Enable 3.3 volt rail not implemented");
                //EN_3V3;
                break;
        }
        return 0;
    }

    int PowerRail::DisableRail(RailName railName){
        // set gpio for enable to low
        switch (railName)
        {
            case RVR::RAIL12V0:
                printf("Disable 12 volt rail not implemented");
                //EN_12V
                break;
            case RVR::RAIL5V0:
                printf("Disable 5 volt rail not implemented");
                //EN_5V
                break;
            case RVR::RAIL3V3:
                printf("Disable 3.3 volt rail not implemented");
                //EN_3V3;
                break;
        }
        return 0;
    }
}