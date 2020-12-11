//
// Created by dalib on 11.12.2020.
//

#ifndef MAIN_CPP_TRADE_H
#define MAIN_CPP_TRADE_H

#include "Interaction.h"

class Trade: public Interaction {
public:
    Trade();
    void makeInteraction(Hero* hero, FriendlyCharacter* friendlyCharacter);
    void checkItemType();
    int chooseItem();
    void buyItem(int itemType, Hero* hero, FriendlyCharacter* friendlyCharacter);
};


#endif //MAIN_CPP_TRADE_H
