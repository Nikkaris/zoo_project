//
// Created by nikol on 04.12.2020.
//

#include "Item.h"

Item::Item(std::string name, itemType typeOfItem){
    m_name = name;
    m_itemType = typeOfItem;
}

itemType Item::getItemType(){
    return m_itemType;
}

std::string Item::getName(){
    return m_name;
}