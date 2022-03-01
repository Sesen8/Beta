// Purpose: Program that checks if user inputted path is correct
// Author:  Sesen Yonas
// Date:    22-02-2022  Twosday!
//

#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {

    MazeCell* currentPosition = start;
    bool ifFoundSpellBook = false;
    bool ifFoundWand = false;
    bool ifFoundPotion = false;


    // iterates through the moves
    for (int i = 0; i < moves.length(); ++i){
        char nextMove = moves[i];

        //moves north if next char is N
        if (nextMove == 'N'){
            currentPosition = currentPosition->north;
        }

        // moves south if next char is S
        else if (nextMove == 'S'){
            currentPosition = currentPosition->south;
        }

        // moves east if next char is E
        else if (nextMove == 'E'){
            currentPosition = currentPosition->east;
        }

        // moves west if next char is W
        else if (nextMove == 'W'){
            currentPosition = currentPosition->west;
        }

        // checks if next move is null if it is returns false
        if (currentPosition == nullptr){
            return false;
        }

        //checks if the spellbook is in the position
        if (currentPosition->whatsHere == Item::SPELLBOOK){
            ifFoundSpellBook = true;
        }

        //checks if the potion is in the position
        if (currentPosition->whatsHere == Item::POTION){
            ifFoundPotion = true;
        }

        //checks if the wand is in the position
        if (currentPosition->whatsHere == Item::WAND){
            ifFoundWand = true;
        }
    }


    return ifFoundWand && ifFoundPotion && ifFoundSpellBook;


}
