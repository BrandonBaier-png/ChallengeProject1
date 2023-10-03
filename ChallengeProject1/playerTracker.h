#pragma once
#include <ostream>
#include "board.h"
using namespace std;

class playerTracker
{
public:

    playerTracker() {}
    playerTracker(int xCoord, int yCoord) { 
        setX(xCoord);
        setY(yCoord);
    }


    // Gets the x-coordinate occupied by the player.
    unsigned int getX() const;

    // Gets the y-coordinate occupied by the player.
    unsigned int getY() const;

    // Sets the x-coordinate occupied by the player.
    void setX(unsigned int x);

    // Sets the y-coordinate occupied by the player.
    void setY(unsigned int y);

    bool validMoveSpace(unsigned int newX, unsigned int  newY);

    friend class board;

private:
    int num;
    //probably will not need these
    
    // Stores the x-coordinate of the left-most space occupied by the boat.
    unsigned int x{ 0 };
    
    // Stores the y-coordinate of the upper-most space occupied by the boat.
    unsigned int y{ 0 };


};



