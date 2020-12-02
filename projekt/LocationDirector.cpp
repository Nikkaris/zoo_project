//
// Created by nikol on 02.12.2020.
//

#include "LocationDirector.h"

LocationDirector::LocationDirector(LocationBuilder* builder){
    m_builder = builder;
}

void LocationDirector::setLocationBuilder(LocationBuilder* builder){
    m_builder = builder;
}

Location* LocationDirector::createLocation(){
    m_builder->createLocation();
    m_builder->createSideLocations();
    return m_builder->getLocation();
}