//
// Created by nikol on 02.12.2020.
//

#ifndef MAIN_CPP_LOCATIONDIRECTOR_H
#define MAIN_CPP_LOCATIONDIRECTOR_H

#include "LocationBuilders/ForestLocationBuilder.h"
#include "LocationBuilders/TownLocationBuilder.h"
#include "LocationBuilders/HutLocationBuilder.h"
#include "LocationBuilders/BogLocationBuilder.h"
#include "LocationBuilders/WoodsLocationBuilder.h"
#include "LocationBuilders/CavernLocationBuilder.h"
#include "LocationBuilders/NecroLocationBuilder.h"
#include "LocationBuilders/TombLocationBuilder.h"

class LocationDirector {
    LocationBuilder* m_builder;
public:
    LocationDirector(LocationBuilder* builder);
    void setLocationBuilder(LocationBuilder* builder);
    Location* createLocation();
};


#endif //MAIN_CPP_LOCATIONDIRECTOR_H
