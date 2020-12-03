//
// Created by dalib on 03.12.2020.
//

#include "StoryTeller.h"

StoryTeller::StoryTeller(){

}

void StoryTeller::printChapter(int chapterNumber){
    if(chapterNumber == 1) {
        printChapterOne();
    }
}


void StoryTeller::printChapterOne(){
    int dialogOption = 0;

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "First Chapter: The Old Mans Hut" << std::endl;
    std::cout << "You are coming back to your senses. You find yourself in a some kind of hut. There is firepit in the middle of room." << std::endl;
    std::cout << "You look to the right and there is person. He looks very old sitting next to the fire. He looked at you and said:" << std::endl;

    std::cout << std::endl;
    std::cout << "You? You are finally awake? I am glad that you made it through. For a moment i thought that I lost you..." << std::endl;
    std::cout << "I do not want to brag, but I have saved your life. I found you in the river. You were cold as ice." << std::endl;
    std::cout << "Now, when you are conscious." << std::endl;
}