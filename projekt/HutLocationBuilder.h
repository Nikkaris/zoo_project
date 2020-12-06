//
// Created by nikol on 03.12.2020.
//

#ifndef MAIN_CPP_HUTLOCATIONBUILDER_H
#define MAIN_CPP_HUTLOCATIONBUILDER_H

#include "LocationBuilder.h"

class HutLocationBuilder: public LocationBuilder {
public:
    HutLocationBuilder();
    void createLocation();
    void createSideLocations();
};


#endif //MAIN_CPP_HUTLOCATIONBUILDER_H
