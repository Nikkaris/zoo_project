//
// Created by nikol on 07.12.2020.
//

#include "StealCoins.h"

StealCoins::StealCoins(): Interaction("Steal coins"){
}

void StealCoins::makeInteraction(Hero* hero, FriendlyCharacter* friendlyCharacter){
    if (hero->getAgility() > friendlyCharacter->getAgility()){
        hero->addCoins(friendlyCharacter->getCoins());
    } else {
        std::cout << "Hey you cant steal from me! Step Back!";
    }
}