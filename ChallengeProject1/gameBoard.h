#pragma once
#include <ostream>

class gameBoard {
public:
	
private:
	gameBoard& board;
};

inline std::ostream& operator << (std::ostream& out, const gameBoard& game) {
	out << "test";
}