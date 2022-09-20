//Kevin Yu
//9-14-22
//TicTacToe 2 player game

//Cite for refrence:
//https://stackoverflow.com/questions/48737248/how-do-i-print-a-tic-tac-toe-board-after-the-user-enters-in-the-rows-and-columns

#include <iostream>
#include <cstring>
using namespace std;

void drawBoard(int num, int letter);
bool check_space(char letter, int number, char board[3][3]);
bool check_win();

int main() {
        char board[3][3] = {{ 0 }};
        char play = 'y';
        //x turn = 0
        //o turn = 1
        int turn = 0;
        char letter;
        int number;
        while (play == 'y') {
                cout << "Please enter a letter (a to c): " << endl;
                cin >> letter;
                cout << "Please enter a number (1 to 3): " << endl;
                cin >> number;
                if (check_space(letter, number, board) == false) {
                        cout << "Already taken, try again!" << endl;
                }
                else {
                        if (letter == 'a') {
                                drawBoard(number, 0);
                        }
                        if (letter == 'b') {
                                drawBoard(number, 1);
                        }
                        if (letter == 'c') {
                                drawBoard(number, 2);
                        }
                }
                play = 'n';
        }
        return 0;
}

bool check_win() {

}

bool check_space(char letter, int number, char board[3][3]) {
        if (letter == 'a') {
                if (board[0][number] == 1) {
                        return false;
                }
                else {
                        board[0][number] = 1;
                        return true;
                }
        }
        if (letter == 'b') {
                if (board[1][number] == 1) {
                        return false;
                }
                else {
                        board[1][number] = 1;
                        return true;
                }
        }
        if (letter == 'c') {
		if (board[1][number] == 1) {
                        return false;
                }
                else {
                        board[1][number] = 1;
                        return true;
                }
        }
}

void printNumbers() {
        cout << "   ";
        for (int i = 0; i < 3; i++) {
                cout <<  "   " << i+1 << " ";
        }
        cout << endl;
}

void drawBoard(int num, int letter) {
        printNumbers();
        for (int i = 0; i < 3; i++) {
                cout << " " << char('A'+i);
                if (letter == i) {
                        for (int j = 0; j < 3; j++) {
                                if (j == num) {
                                        cout << "  x  ";
                                }
                                else {
                                        cout << "  |  ";
                                }
                        }
                }
                else {
                        for (int j = 0; j < 3; j++) {
                                cout << "  |  ";
                        }
                }
                cout << " | " << endl;
        }
        cout << endl;

}
                                                                                           
