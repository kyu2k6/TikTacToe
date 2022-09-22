//Kevin Yu
//9-14-22
//TicTacToe 2 player game

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void drawBoard(int num, int letter, char board[3][3]);
bool check_space(char letter, int number, char board[3][3], int &turn);
bool check_win();

int main() {
        char board[3][3] = {{ '-' }};
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
                if (check_space(letter, number, board, turn) == false) {
                        cout << "Already taken, try again!" << endl;
                }
                else {
                        if (letter == 'a') {
                                drawBoard(number, 0, board);
                        }
                        if (letter == 'b') {
                                drawBoard(number, 1, board);
                        }
                        if (letter == 'c') {
                                drawBoard(number, 2, board);
                        }
                }
                play = 'n';
        }
        return 0;
}

bool check_win() {

}

bool check_space(char letter, int number, char board[3][3], int &turn) {
        number -= 1;
        if (letter == 'a') {
                if (board[0][number] == 1) {
                        return false;
                }
                else {
                        if (turn == 0) {
                                board[0][number] = 'X';
                        }
                        else {
                                board[0][number] = 'O';
                        }
                        turn = abs(turn-1);
                }
        }
        if (letter == 'b') {
                if (board[1][number] == 1) {
                        return false;
                }
                else {
                        board[1][number] = 1;
                         if (turn == 0) {
                                board[0][number] = 'X';
                        }
                        else {
                                board[0][number] = 'O';
                        }
                        turn = abs(turn-1);
                }
        }
        if (letter == 'c') {
                if (board[1][number] == 1) {
                        return false;
                }
                else {
                        board[1][number] = 1;
                         if (turn == 0) {
                                board[0][number] = 'X';
                        }
                        else {
                                board[0][number] = 'O';
                        }
                        turn = abs(turn-1);
                }
        }

        return true;
}

void printNumbers() {
        for (int i = 0; i < 3; i++) {
                cout << i+1;
        }
        cout << endl;
}

void drawBoard(int num, int letter, char board[3][3]) {
        printNumbers();
        for (int i = 0; i < 3; i++) {
                cout << " " << char('A'+i);
                for (int j = 0; j < 3; j++) {
                        cout << board[i][j];
                }
                cout << endl;
        }
}
