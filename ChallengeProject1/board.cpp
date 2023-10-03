#include "board.h"
#include "playerTracker.h"
#include <algorithm>
#include <functional>
#include <cstdlib>
using namespace std;

playerTracker playerVal;
//int playerLoc[2];

unsigned int* board::getPlayerLocation() const
{
	return 0;
}

void board::setPlayerLoc(int locX, int locY) {
	//recieves values from call & assigns them to private variables within board.h
	this->playerX = locX;
	this->playerY = locY;
}

void board::printMap() {
		//out << "board printing test: " << player1.getX() << endl;
	
	/*
	* playerTracker* getValPointer = player1.getX();
	* 
	* ^^^Need to understand how this pointer is able to work ^^^
	* Cannot place the player character until i get the values from the playerTracker getX and getY functions
	*/
	int tempVariable = 0;
	cout << "board.cpp values for player: " << playerVal.getX() << endl;
		for (int j = 0; j < board::BOARD_SIZE; j++)
		{

			for (int i = 0; i < board::BOARD_SIZE; i++)
			{
				// going to be value that tracks the player. Not sure how to implement though...
				//const playerTracker* player.get = 
				if (tempVariable == 1) {
					cout << "_0_";
				}
				//else if (goal) { // creates the goal mechanic, waiting for player to be implemented first
				//	out << ".P.";
				//}
				else {
					cout << "~~~";
				}


			}
			cout << std::endl;
		}
		//cout << "board.h version: " << player1.getX() << endl;

}

