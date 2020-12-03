//
// Created by nikol on 02.12.2020.
//

#ifndef MAIN_CPP_LOCATIONBUILDER_H
#define MAIN_CPP_LOCATIONBUILDER_H

#include "Location.h"

const int noDirection = -1;

class LocationBuilder {
protected:
    Location* m_location;
public:
    LocationBuilder();
    void virtual createLocation() = 0;
    void virtual createSideLocations() = 0;
    Location* getLocation();
};


#endif //MAIN_CPP_LOCATIONBUILDER_H
