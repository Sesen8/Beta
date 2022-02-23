// Purpose: Test the function bool isPathToFreedom
// Author:  Max Benson
// Date:    22-02-2022  Twosday!
//
#include <string>
using std::string;

#include "Validate.h"
#include "Labyrinth.h"
#include "MazeGenerator.h"

bool Validate() {
    string kYourName = "TODO: Replace this string with your name.";
    string bad[] = {
            "W",
            "E",
            "N",
            "SN",
            "SW",
            "SS",
            "SEWW",
            "SENN",
            "SESSS",
            "SESSWE",
            "SESWW",
            "SESE",
            "SEENSWSSWENNEESSS"
    };
    string good[] {
        "SEENSESSNNWWSSW",
        "SEWEWEWEWEWEWEENSESSNNWWSSW",
        "SESSWENNENSESS",
        "SESSWENNENSESSNNN",
        "SEENSWSSWENNEESS"
    };
    MazeCell* startLocation = mazeFor(kYourName);

    for (size_t i = 0; i < sizeof(bad)/sizeof(bad[0]); i ++) {
        if (isPathToFreedom(startLocation, bad[i])) {
            return false;
        }
    }
    for (size_t i = 0; i < sizeof(good)/sizeof(good[0]); i ++) {
        if (!isPathToFreedom(startLocation, good[i])) {
            return false;
        }
    }
    return true;
}


