//
// Created by nikol on 04.12.2020.
//

#ifndef MAIN_CPP_ITEM_H
#define MAIN_CPP_ITEM_H

#include <iostream>

class Item {
protected:
    std::string m_name;
    std::string m_itemType;
public:
    Item(std::string name, std::string itemType);
    std::string getItemType();
    virtual void printInfo() = 0;
};


#endif //MAIN_CPP_ITEM_H
