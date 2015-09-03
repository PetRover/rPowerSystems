//
// Created by Bryce Carter on 8/25/15.
//

#include "rPower.h"

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
                //EN_12V
            case RVR::RAIL5V0:
                //EN_5V
            case RVR::RAIL3V3:
                //EN_3V3;
        }
        return 0;
    }

    int PowerRail::DisableRail(RailName railName){
        // set gpio for enable to low
        switch (railName)
        {
            case RVR::RAIL12V0:
                //EN_12V
            case RVR::RAIL5V0:
                //EN_5V
            case RVR::RAIL3V3:
                //EN_3V3;
        }
        return 0;
    }
}