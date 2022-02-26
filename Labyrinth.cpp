#include "Labyrinth.h"

bool isPathToFreedom(MazeCell* start, const std::string& moves) {

    MazeCell* currentPosition = start;
    bool ifFoundSpellBook = false;
    bool ifFoundWand = false;
    bool ifFoundPotion = false;

    for (int i = 0; i < moves.length(); ++i){
        char nextMove = moves[i];

        if (nextMove == 'N'){
            currentPosition = currentPosition->north;
        }
        else if (nextMove == 'S'){
            currentPosition = currentPosition->south;
        }
        else if (nextMove == 'E'){
            currentPosition = currentPosition->east;
        }
        else if (nextMove == 'W'){
            currentPosition = currentPosition->west;
        }

        if (currentPosition == nullptr){
            return false;
        }

        if (currentPosition->whatsHere == Item::SPELLBOOK){
            ifFoundSpellBook = true;
        }

        if (currentPosition->whatsHere == Item::POTION){
            ifFoundPotion = true;
        }

        if (currentPosition->whatsHere == Item::WAND){
            ifFoundWand = true;
        }
    }


    return ifFoundWand && ifFoundPotion && ifFoundSpellBook;

    
}
