//Kevin Yu
//9-14-22
//TicTacToe 2 player game

//Cite for refrence: 
//https://stackoverflow.com/questions/48737248/how-do-i-print-a-tic-tac-toe-board-after-the-user-enters-in-the-rows-and-columns

#include <iostream>
#include <cstring>
using namespace std;

void drawBoard();

int main() {
	char play = 'y';
	while (play == 'y') {
		drawBoard();
		cout << "Please enter a coordinate: ";
	}
	drawBoard();	
	return 0;
}

bool x_turn() {
	
}


void printNumbers() {
	cout << "   ";
	for (int i = 0; i < 3; i++) {
		cout <<  "   " << i+1 << " ";
	}
	cout << endl;
}

void drawBoard() {
	printNumbers();
	for (int i = 0; i < 3; i++) {
		cout << " " << char('A'+i);
		for (int j = 0; j < 3; j++) {
			cout << "  |  ";
		}
		cout << " | " << endl;
	}
	cout << endl;
	
}


