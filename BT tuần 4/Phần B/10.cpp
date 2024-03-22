#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> board;
vector<bool> column, hill, dale;

void printSolution() {
    for(int i = 0; i < board.size(); i++) {
        for(int j = 0; j < board.size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

bool canPlace(int row, int col) {
    return !column[col] && !hill[row - col + board.size() - 1] && !dale[row + col];
}

void placeQueen(int row, int col) {
    board[row][col] = 1;
    column[col] = true;
    hill[row - col + board.size() - 1] = true;
    dale[row + col] = true;
}

void removeQueen(int row, int col) {
    board[row][col] = 0;
    column[col] = false;
    hill[row - col + board.size() - 1] = false;
    dale[row + col] = false;
}

void placeQueens(int row, int N) {
    if(row == N) {
        printSolution();
        return;
    }
    for(int col = 0; col < N; col++) {
        if(canPlace(row, col)) {
            placeQueen(row, col);
            placeQueens(row + 1, N);
            removeQueen(row, col);
        }
    }
}

int main() {
    int N = 5;
    board = vector<vector<int>>(N, vector<int>(N, 0));
    column = vector<bool>(N, false);
    hill = vector<bool>(2 * N - 1, false);
    dale = vector<bool>(2 * N - 1, false);
    placeQueens(0, N);
    return 0;
}
