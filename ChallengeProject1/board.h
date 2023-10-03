#pragma once
#include <iostream>
#include <ostream>
#include "playerTracker.h"


//#include "main.cpp"
 //will this be able to grab the values given from player1?
using namespace std;
//playerTracker playerObj;

class board
{
public:
	const static unsigned int BOARD_SIZE = 10;
	void setPlayerLoc(int locX, int locY);
	//friend class main;
	unsigned int* getPlayerLocation() const;

	void printMap();

	
	unsigned int playerX{ 0 };

	unsigned int playerY{ 0 };

protected:
	
};



//playerTracker player1(1,1);


/*inline std::ostream& operator << (std::ostream& out, const board& playArea) {
	//out << "board printing test: " << player1.getX() << endl;
	
	for (int j = 0; j < board::BOARD_SIZE; j++)
	{
		
        for (int i = 0; i < board::BOARD_SIZE; i++)
        {
			// going to be value that tracks the player. Not sure how to implement though...
			//const playerTracker* player.get = 
			if(tempVariable == j) {
				out << "_0_";
			}
			//else if (goal) {
			//	out << ".P.";
			//}
			else {
				out << "~~~";
			}

			
        }
        out << std::endl;
	}
	//cout << "board.h version: " << player1.getX() << endl;

	return out;	
}*/



