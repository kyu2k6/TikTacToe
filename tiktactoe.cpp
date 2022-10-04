//Kevin Yu
//9-14-22
//TicTacToe 2 player gamei

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

void drawBoard(int num, int letter, char board[3][3]);
bool check_space(char letter, int number, char board[3][3], int &turn, int &tie);
bool check_win(char board[3][3], int &turn);

int main() {
        int x_wins = 0;
        int o_wins = 0;
        int tie = 0;
        char board[3][3] = {{'2','2','2'},{'2','2','2'},{'2','2','2'}};
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
                if (check_space(letter, number, board, turn, tie) == false) {
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

                if (check_win(board, turn) == true) {
                        if (turn == 0) {
                                o_wins += 1;
                                cout << "O WINS" << endl;
                        }
                        else {
                                x_wins += 1;
                                cout << "X WINS" << endl;
                        }
                        cout << "Play again? Put in y for yes and n for no, " << endl;
                        cin >> play;
                        if (play == 'y') {
                                for (int i = 0; i < 3; i++) {
                                        for (int j = 0; j < 3; j++) {
                                                board[i][j] = '2';
                                        }
                                }
                                turn = 0;
                                tie = 0;
                        }
                        else {
                                cout << "X wins: " << x_wins << ", O wins: " << o_wins << endl;
                                break;
                        }
                }
                else if (tie == 9) {
                        cout << "TIE" << endl;
                        cout << "Play again? Put in y for yes and n for no, " << endl;
                        cin >> play;
                        if (play == 'y') {
                                for (int i = 0; i < 3; i++) {
                                        for (int j = 0; j < 3; j++) {
                                                board[i][j] = '2';
                                        }
                                }
                                turn = 0;
                                tie = 0;
                        }
                        else {
                                cout << "X wins: " << x_wins << ", O wins: " << o_wins << endl;
                                break;
                        }
                }
        }
        return 0;
}

bool check_win(char board[3][3], int &turn) {
        int player;
        if (turn == 0) {
                player = '1';
        }
        else {
                player = '0';
        }
        if ((board[0][0] == player) && (board[0][1] == player) && (board[0][2] == player)) {
                return true;
        }
        if ((board[1][0] == player) && (board[1][1] == player) && (board[1][2] == player)) {
                return true;
        }
        if ((board[2][0] == player) && (board[2][1] == player) && (board[2][2] == player)) {
                return true;
        }
        if ((board[0][0] == player) && (board[1][0] == player) && (board[2][0] == player)) {
                return true;
        }
        if ((board[0][1] == player) && (board[1][1] == player) && (board[2][1] == player)) {
                return true;
        }
        if ((board[0][2] == player) && (board[1][2] == player) && (board[2][2] == player)) {
                return true;
        }
        if ((board[0][0] == player) && (board[1][1] == player) && (board[2][2] == player)) {
                return true;
        }
        if ((board[0][2] == player) && (board[1][1] == player) && (board[2][0] == player)) {
 }

        return false;

}

bool check_space(char letter, int number, char board[3][3], int &turn, int &tie) {
        number -= 1;
        if (letter == 'a') {
                if ((board[0][number] == '1') || (board[0][number] == '0')) {
                        return false;
                }
                else {
                        if (turn == 1) {
                                board[0][number] = '1';
                        }
                        else {
                                board[0][number] = '0';
                        }
                        tie += 1;
                        turn = abs(turn-1);
                        return true;
                }
        }
        if (letter == 'b') {
                if ((board[1][number] == '1') || (board[1][number] == '0')) {
                        return false;
                }
                else {
                        if (turn == 1) {
                                board[1][number] = '1';
                        }
                        else {
                                board[1][number] = '0';
                        }
                        tie += 1;
                        turn = abs(turn-1);
                        return true;
                }
        }
        if (letter == 'c') {
                if ((board[2][number] == '1') || (board[2][number] == '0')) {
                        return false;
                }
                else {
                        if (turn == 1) {
                                board[2][number] = '1';
                        }
                        else {
                                board[2][number] = '0';
                        }
                        tie += 1;
                        turn = abs(turn-1);
                        return true;
                }
        }
}

void printNumbers() {
        cout << " ";
        for (int i = 0; i < 3; i++) {
                cout << i+1;
        }
        cout << endl;
}

void drawBoard(int num, int letter, char board[3][3]) {
        printNumbers();
        for (int i = 0; i < 3; i++) {
                cout << char('A'+i);
                for (int j = 0; j < 3; j++) {
                        if (board[i][j] == '0') {
                                cout << "X";
                        }
                        if (board[i][j] == '1') {
                                cout << "O";
                        }
                        if (board[i][j] == '2') {
                                cout << " ";
                        }
                }
                cout << endl;
        }
}
