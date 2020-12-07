//
// Created by dalib on 03.12.2020.
//

#include "StoryTeller.h"

StoryTeller::StoryTeller(){
}

int StoryTeller::getPlayerDialogInput(char min, char max, std::string errorText){
    char playerInput;
    std::cin >> playerInput;
    while (playerInput < min || playerInput > max) {
        std::cout << errorText << std::endl;
        std::cin >> playerInput;
    }
    return playerInput;
}

heroAttributes StoryTeller::chooseHeroAttributes(){
    heroAttributes attributes;
    attributes.strength = 0; attributes.agility = 0; attributes.charisma = 0;
    char dialogOption;
    std::cout << std::endl;
    std::cout << "I got a few questions for you." << std::endl;
    std::cout << "Where are you from?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I am from North, i do not know why but I have everything blurred..." << std::endl;
    std::cout << "2. I am from West, i do not know why but I have everything blurred..." << std::endl;
    std::cout << "3. I am from East, i do not know why but I have everything blurred..." << std::endl;

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == '1') {
        std::cout << "Oh, so you are norseman. You seemed to me kinda muscular..." << std::endl;
        attributes.strength++;
    } else if (dialogOption == '2') {
        std::cout << "Oh, so you are from West. Western people are very agile and good in sneaking..." << std::endl;
        attributes.agility++;
    } else if (dialogOption == '3'){
        std::cout << "Oh, so you are from East. Eastern people are talkative." << std::endl;
        attributes.charisma++;
    }

    std::cout << std::endl;
    std::cout << "I see that you are trying to remember. What is your profession?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I am travelling merchant. I used to have a lot of friends in many towns" << std::endl;
    std::cout << "2. I think that I was a royal guard" << std::endl;
    std::cout << "3. I do not like to admit, but i was thief. People hired and I accepted..." << std::endl;

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == '1') {
        std::cout << "That is what I thought. That would explain your personality and temperament." << std::endl;
        attributes.strength += 2;
    } else if (dialogOption == '2') {
        std::cout << "That would explain that crest on your armor." << std::endl;
        attributes.agility += 2;
    } else if (dialogOption == '3') {
        std::cout << "Cape and leather armor, that explain a lot, but do not worry I do not judge you." << std::endl;
        std::cout << "Living in this world is harder than before..." << std::endl;
        attributes.charisma += 2;
    }

    std::cout << std::endl;
    std::cout << "You must be hungry." << std::endl;
    std::cout << "The old man offered you vegetable stew." << std::endl;
    std::cout << "Anyway, my last question is, how would you dealt with combat situation?" << std::endl;
    std::cout << std::endl;
    std::cout << "1. I would not go for face-to-face fight. I would strike from the shadows." << std::endl;
    std::cout << "2. I hate fights, I always considered myself as peaceful being, even in this cruel world." << std::endl;
    std::cout << "3. I love the adrenaline in my blood, I would use my full strength to crush my enemy.." << std::endl;

    dialogOption = getPlayerDialogInput('1', '3', "That is not answering my question");

    if(dialogOption == '1') {
        std::cout << "I agree, when you catch your enemy off-guard. It makes your fight a lot easier." << std::endl;
        attributes.strength++;
    } else if (dialogOption == '2') {
        std::cout << "Nowdays is hard to not fight. Sometimes you just have to. But your answer is not wrong." << std::endl;
        attributes.agility++;
    } else if (dialogOption == '3') {
        std::cout << "I see, that you are really sure about yourself. And that is not in fact wrong, but its double sided edge" << std::endl;
        attributes.charisma++;
    }
    std::cout << attributes.strength << "\n";
    return attributes;
}

void StoryTeller::printChapter(int chapterNumber){
    switch (chapterNumber){
        case 1: printChapterOne();
                break;
    }
}

void StoryTeller::printChapterOne(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "First Chapter: The Old Mans Hut" << std::endl;
    std::cout << "You are coming back to your senses. You find yourself in a some kind of hut. There is firepit in the middle of room." << std::endl;
    std::cout << "You look to the right and there is person. He looks very old sitting next to the fire. He looked at you and said:" << std::endl;

    std::cout << std::endl;
    std::cout << "You? You are finally awake? I am glad that you made it through. For a moment i thought that I lost you..." << std::endl;
    std::cout << "I do not want to brag, but I have saved your life. I found you in the river. You were cold as ice." << std::endl;
    std::cout << "Now, when you are conscious." << std::endl;
}
