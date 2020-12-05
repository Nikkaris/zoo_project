//
// Created by nikol on 04.12.2020.
//

#include "Item.h"

Item::Item(std::string name, std::string itemType){
    m_name = name;
    m_itemType = itemType;
}

std::string Item::getItemType(){
    return m_itemType;
}

std::string Item::getName(){
    return m_name;
}