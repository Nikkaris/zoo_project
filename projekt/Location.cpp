//
// Created by nikol on 19.11.2020.
//

#include "Location.h"

Location::Location(std::string name, TsideLocation sideLocations){
    m_name = name;
    m_sideLocations = sideLocations;
}

TsideLocation Location::getSideLocations(){
    return m_sideLocations;
}

void Location::printInfo(){
    std::cout << m_name << std::endl;
}