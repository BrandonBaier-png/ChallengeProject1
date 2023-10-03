#include "playerTracker.h"
#include <algorithm>
#include <iostream>
using namespace std;

//playerTracker::playerTracker() : num(0) {}

unsigned int playerTracker::getX() const
{
    return x;
}

unsigned int playerTracker::getY() const
{
    return y;
}

void playerTracker::setX(unsigned int startX)
{
    this->x = startX;
}

void playerTracker::setY(unsigned int startY)
{
    this->y = startY;
}

bool playerTracker::validMoveSpace(unsigned int newX, unsigned int newY) {
    
    cout << "player tracker: " << this->getX() << endl;
    return true;
}