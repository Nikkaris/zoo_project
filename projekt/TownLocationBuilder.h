//
// Created by nikol on 02.12.2020.
//

#ifndef MAIN_CPP_TOWNLOCATIONBUILDER_H
#define MAIN_CPP_TOWNLOCATIONBUILDER_H

#include "LocationBuilder.h"

class TownLocationBuilder: public LocationBuilder {
public:
    TownLocationBuilder();
    void createLocation();
    void createSideLocations();
};


#endif //MAIN_CPP_TOWNLOCATIONBUILDER_H
