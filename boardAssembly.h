#include <iostream>
#pragma once

class boardAssembly {
public:
	int column[4]; //placeholder values. These arrays will keep track of what is placed on the board
	int row[5];

	int targetOncoming[5]; //tracks the positioning of the upcoming targets
private:
	/*
	Use this class to setup the get the default character values placed on the screen
	will use 2 arrays to create the initial conditions
	Board will look something like this to start out
	

	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	--- --- --- ---
	000 000 000 000

	0's indicate the zone which the player should press the proper key
	
	*/
};

