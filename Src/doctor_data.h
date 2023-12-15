//
// Created by Manoloon on 15/12/2023.
//
#ifndef DOCTOR_DATA_H
#define DOCTOR_DATA_H
#pragma once

#include <iostream>
#include <string>

namespace star_map {
    enum class System {
        BetaHydri,
        EpsilonEridani,
        Sol,
        AlphaCentauri,
        DeltaEridani,
        Omicron2Eridani,
        NONE
    };
}
namespace heaven {
    class Vessel {
    public:
        std::string name;
        int generation;
        star_map::System current_system = star_map::System::NONE;
        int busters = 0;

        Vessel(std::string _name, int _generation, star_map::System _system = star_map::System::NONE) :
        name(_name),generation(_generation),current_system(_system) {}

        Vessel replicate(std::string newName) { return Vessel(newName, this->generation + 1, star_map::System::Sol); }

        bool shoot_buster() {
            if (busters > 0) {
                busters--;
                return true;
            }
            return false;
        }

        void make_buster() { busters++; }
    };

    bool in_the_same_system(Vessel &A, Vessel &B) {
        return (A.current_system == B.current_system);
    }

    std::string get_older_bob(Vessel &A, Vessel &B) {
        return (A.generation < B.generation) ? A.name : B.name;
    }

}
#endif //DOCTOR_DATA_H
