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
        case 2: printChapterTwo();
                break;
        case 3: printChapterThree();
                break;
        case 4: printChapterFour();
                break;
        case 5: printChapterFive();
                break;
        case 6: printChapterSix();
                break;
        case 7: printChapterSeven();
                break;
        case 8: printChapterEight();
                break;
    }
}

void StoryTeller::printChapterOne(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter One: The Old Man's Hut" << std::endl;
    std::cout << "You are coming back to your senses. You find yourself in a some kind of hut. There is firepit in the middle of room." << std::endl;
    std::cout << "You look to the right and there is person. He looks very old sitting next to the fire. He looked at you and said:" << std::endl;

    std::cout << std::endl;
    std::cout << "You? You are finally awake? I am glad that you made it through. For a moment i thought that I lost you..." << std::endl;
    std::cout << "I do not want to brag, but I have saved your life. I found you in the river. You were cold as ice." << std::endl;
    std::cout << "Now, when you are conscious." << std::endl;
}

void StoryTeller::printChapterTwo() {
    /*Není to ani půl den cesty a již jsi spatřil zmiňovaný Šeptající Les. Stařec ti o něm vyprávěl, prý zde byla masakr. Armáda plenící vesnici.
     * Nebrali zajatce, vraždili všechny starce, ženy i děti. Na pozůstatcích vzrostl tento majestátní les, který je přece jenom něčím zvláštní.
     * Kolují o něm historky, že prý, když skrze něj procházíš, tak lze stále slyšet nářek vesničanů, kteří v ten soudný den zahynuli.
     */
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Two: Whispering Woods" << std::endl;
    std::cout << "It's not even half of the day and you are standing in front of Whispering Woods. Old Man has told you a lot about it, he mentioned massacre." << std::endl;
    std::cout << "Army pillaging village. They didn't take any prisoners, they were here just for slaughter." << std::endl;
    std::cout << "On the remains of the village a forest grew up, which is strange in some way." << std::endl;
    std::cout << "I heard many rumors about people, who travelled through and they heard wailing, moaning and crying, which doesnt belong to human." << std::endl;
    std::cout << "And now you are standing right in front..." << std::endl;
}

void StoryTeller::printChapterThree(){
    /*Vcházíš do vesnice, jestli se to tak dá nazývat. To co vidíš by se jen těžko dalo srovnávat s vesnicí, čí osadou. Jediné,
     * co vidíš jsou pár zchátralých dřevěných budovy, které mají střechy porostlé mechem a trávou. Není zde nic, co by lidské oko
     * potěšilo, pouze bída, bahno a hnijící věci...
     * */
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Three: Crimson Village" << std::endl;
    std::cout << "You are entering Crimson Village, if we can call it village. What you see can be with difficulty compared with village or settlement" << std::endl;
    std::cout << "All you see is a couple of ramshackle buildings, which have roofs covered with moss and grass." << std::endl;
    std::cout << "There is nothing that would please human eye. There is only misery, mud and rotting things..." << std::endl;

}

void StoryTeller::printChapterFour(){
    /*Bažina...místo, které bych nepřál ani nepříteli. Hemží se to zde ropuchami, krysami a další havětí. Nejhorší na bažině je ta hustá mlha.
     * Lidské oko skrze ní sotva vidí obrysy, což ještě není tak hrozné, horší je, že bytosti žijící v bažině moc dobře vidí nevítané hosty.*/
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Four: Twisted Bog" << std::endl;
    std::cout << "Bog..Swamp, the last place where you wanted to be. " << std::endl;
    std::cout << "The worst aren't those little frogs, neither snails or other vermin. The worst is fog. Human eye cannot see through." << std::endl;
    std::cout << "But I warn you, in the bog are many creatures, who can see, and they are not happy about newcomer..." << std::endl;
    std::cout << "Watch your back..." << std::endl;
}

void StoryTeller::printChapterFive(){
    /*Chvíli jsi nedával pozor a ocitl jsi se v Hollow Woods. Na pohled je to čarovné místo v tomto prohnilém světě. Vše hraje barvami a nemálo
     * stromů bylo nahrazeno obřími houbami*/
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Five: Hollow Woods" << std::endl;
    std::cout << "For a moment you were thinking to yourself and forgot to watch out for journey and now you are in the middle of Hollow Woods." << std::endl;
    std::cout << "At the first sight it looks as magical place in this rotten world of misery. Everything shine in every color and many of tress were replaced by" << std::endl;
    std::cout << "big mushrooms. But do not get yourself fooled by beauty of this forest." << std::endl;
    std::cout << "Mushrooms, which are decorating this forest, are also disease of this forest." << std::endl;
}

void StoryTeller::printChapterSix(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Six: Bandit's Ambush" << std::endl;
    std::cout << "What were you thinking? Locals did not warn you? And that location name... Good luck with fight, you have been ambushed." << std::endl;
    std::cout << "Good luck with that." << std::endl;
}

void StoryTeller::printChapterSeven(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Seven: Ancient Tomb" << std::endl;
}

void StoryTeller::printChapterEight(){
    std::cout << std::endl << std::endl << std::endl;
    std::cout << "Chapter Eight: Dead Man's End" << std::endl;
}

