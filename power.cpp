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
}