// Purpose: Program that checks if user inputted path is correct
// Author:  Sesen Yonas
// Date:    22-02-2022  Twosday!
//

#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {
    MazeCell* currentPos = start;
    bool spellbookPresent = false;
    bool wandPresent = false;
    bool potionPresent = false;


// iterates through the moves
    for (int i = 0; i < moves.length(); ++i){
        char nextMove = moves[i];

        //moves north if next char is N
        if (nextMove == 'N'){
            currentPos = currentPos->north;
        }

        // moves east if next char is E
        else if (nextMove == 'E'){
            currentPos = currentPos->east;
        }

        // moves west if next char is W
        else if (nextMove == 'W'){
            currentPos = currentPos->west;
        }
        // moves south if next char is S
        else if (nextMove == 'S'){
            currentPos = currentPos->south;
        }

        // checks if next move is null if it is returns false
        if (currentPos == nullptr){
            return false;
        }

        //checks if the spellbook is in the position
        if (currentPos->whatsHere == Item::SPELLBOOK){
            spellbookPresent = true;
        }

        //checks if the wand is in the position
        if (currentPos->whatsHere == Item::WAND){
            wandPresent = true;
        }

        //checks if the potion is in the position
        if (currentPos->whatsHere == Item::POTION){
            potionPresent = true;
        }

        
    }

    return spellbookPresent && wandPresent && potionPresent;


}






