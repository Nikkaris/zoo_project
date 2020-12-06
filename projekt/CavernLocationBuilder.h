//
// Created by dalib on 06.12.2020.
//

#ifndef MAIN_CPP_CAVERNLOCATIONBUILDER_H
#define MAIN_CPP_CAVERNLOCATIONBUILDER_H

#include "LocationBuilder.h"

class CavernLocationBuilder: public LocationBuilder {

public:
    CavernLocationBuilder();
    void createLocation();
    void createSideLocations();
};


#endif //MAIN_CPP_CAVERNLOCATIONBUILDER_H
