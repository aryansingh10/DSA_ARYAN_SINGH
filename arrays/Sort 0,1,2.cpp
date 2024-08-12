#include <iostream>

using namespace std;

const int N = 8;  // Size of the board

void addSolution(int ans[N][N], int board[N][N], int &solutionCount) {
    // Print the solution
    cout << "Solution " << solutionCount + 1 << ":" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    solutionCount++;
}

bool isSafe(int row, int col, int board[N][N]) {
    int x = row;
    int y = col;

    // Check row on left side
    while (y >= 0) {
        if (board[x][y] == 1)
            return false;
        y--;
    }

    x = row;
    y = col;

    // Check upper diagonal on left side
    while (x >= 0 && y >= 0) {
        if (board[x][y] == 1)
            return false;
        y--;
        x--;
    }

    x = row;
    y = col;

    // Check lower diagonal on left side
    while (x < N && y >= 0) {
        if (board[x][y] == 1)
            return false;
        y--;
        x++;
    }

    return true;
}

void solve(int col, int ans[N][N], int board[N][N], int &solutionCount) {
    if (col == N) {
        addSolution(ans, board, solutionCount);
        return;
    }

    for (int row = 0; row < N; row++) {
        if (isSafe(row, col, board)) {
            board[row][col] = 1;
            solve(col + 1, ans, board, solutionCount);
            board[row][col] = 0;
        }
    }
}

int main() {
    int board[N][N] = {0};
    int ans[N][N];
    int solutionCount = 0;

    solve(0, ans, board, solutionCount);

    if (solutionCount == 0) {
        cout << "No solutions exist for " << N << " queens." << endl;
    } else {
        cout << "Number of solutions: " << solutionCount << endl;
    }

    return 0;
}
