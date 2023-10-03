#include <iostream>
#include <string>
#include <ctime>
#include "../ChallengeProject1/board.h" 
#include "../ChallengeProject1/playerTracker.h"
using namespace std;
//#include "../BattleBoats/BattleBoatsGame.h"




int main()
{
	int winPoints = 0;
	unsigned int userMove;

	playerTracker player1(1, 1);
	
	//player1.setX(1);
	//player1.setY(1);
	cout << player1.getX() << endl;
	board playArea;
	//captureGame   //this will implement the captureGame and create the board variable. 
	int newX = 0;

	do {
		playArea.printMap();//cout << playArea;
		winPoints++;
		cout << "determine a new x value for the player" << endl;
		cin >> newX;

		player1.setX(newX);
		player1.validMoveSpace(2,2);
		cout << "main version: " << player1.getX() << endl;
		

	} while (winPoints < 1);


}