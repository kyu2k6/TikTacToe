//Kevin Yu
//9-14-22
//TicTacToe 2 player game

//Cite for refrence:
//https://stackoverflow.com/questions/48737248/how-do-i-print-a-tic-tac-toe-board-after-the-user-enters-in-the-rows-and-columns

#include <iostream>
#include <cstring>
using namespace std;

void drawBoard();
bool check_space(char letter, int number, char board[3][3]);

int main() {
        char board[3][3];
        char play = 'y';
        //x turn = 0
        //o turn = 1
        int turn = 0;
        char letter;
        int number;
        while (play == 'y') {
                drawBoard();
                cout << "Please enter a letter: " << endl;
                cin >> letter;
                cout << "Please enter a number: " << endl;
                cin >> number;
                if (check_space(letter, number, board) == false) {
                        cout << "Already taken, try again!" << endl;
                }
                else {
                        continue;
                }
                play = 'n';
        }
        drawBoard();
        return 0;
}

bool check_win() {

}

bool check_space(char letter, int number, char board[3][3]) {
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


