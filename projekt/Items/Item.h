//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_ITEM_H
#define MAIN_CPP_ITEM_H

#include <iostream>

enum class itemType{
    weapon, armor, potion
};

class Item {
protected:
    std::string m_name;
    itemType m_itemType;
public:
    Item(std::string name, itemType itemType);
    std::string getName();
    itemType getItemType();
    virtual void printInfo() = 0;
};


#endif //MAIN_CPP_ITEM_H
