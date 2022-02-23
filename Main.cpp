// Purpose: Main program for the Linked List Labyrinth
// Original Author:  Keith Schwarz and others at Stanford University
// Modified by: Max Benson
// Modificaiton Date:    22-02-2022  Twosday!
//
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

#include "MazeGenerator.h"
#include "Labyrinth.h"
#include "Validate.h"

/* Change this constant to contain your name.
 *    WARNING: Once you've set set this constant and started exploring your maze,
 *    do NOT edit the value of kYourName. Changing kYourName will change which
 *    maze you get back, which might invalidate all your hard work!
 */
const string kYourName = "TODO: Replace this string with your name.";

/* Change these constants to contain the paths out of your mazes. */
const string kPathOutOfNormalMaze = "TODO: Replace this string with your path out of the normal maze.";
const string kPathOutOfTwistyMaze = "TODO: Replace this string with your path out of the twisty maze.";

int main() {
    // Validate the function written by the student.
    if (!Validate()) {
        cout << "Function isPathToFreedom fails validation testing" << endl;
    }
    else {
        cout << "Function isPathToFreedom passes validation testing" << endl;
    }

    // Generate the maze.
    MazeCell* startLocation = mazeFor(kYourName);
    
    // Set a breakpoint on the next line to explore your maze!
    if (isPathToFreedom(startLocation, kPathOutOfNormalMaze)) {
        cout << "Congratulations! You've found a way out of your labyrinth." << endl;
    } else {
        cout << "Sorry, but you're still stuck in your labyrinth." << endl;
    }
    
    
    // Generate the twisty maze
    MazeCell* twistyStartLocation = twistyMazeFor(kYourName);
    
    // Set a breakpoint on the next line to explore your twisty maze!
    if (isPathToFreedom(twistyStartLocation, kPathOutOfTwistyMaze)) {
        cout << "Congratulations! You've found a way out of your twisty labyrinth." << endl;
    } else {
        cout << "Sorry, but you're still stuck in your twisty labyrinth." << endl;
    }
    
    return 0;
}
