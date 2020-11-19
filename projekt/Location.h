//
// Created by nikol on 19.11.2020.
//

#ifndef PROJEKT_LOCATION_H
#define PROJEKT_LOCATION_H

#include <iostream>
#include <array>

typedef std::array<int, 4> TsideLocation;

class Location {
    std::string m_name;
    TsideLocation m_sideLocations;
public:
    Location(std::string name, TsideLocation sideLocations);
    TsideLocation getSideLocations();
    void printInfo();
};


#endif //PROJEKT_LOCATION_H
