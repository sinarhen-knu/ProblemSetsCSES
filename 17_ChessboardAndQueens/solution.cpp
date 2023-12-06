#include <iostream>
#include <vector>

using namespace std;

vector<vector<char>> arr(8, vector<char>(8));
vector<bool> leftDiagonal(30);
vector<bool> rightDiagonal(30);
vector<bool> placedRows(30);
long long ans = 0;

bool isSafe(int row, int col) {
    return (arr[row][col] == '.' && !leftDiagonal[row - col + 7] && !rightDiagonal[row + col] && !placedRows[row]);
}

void placeQueen(int row, int col) {
    leftDiagonal[row - col + 7] = rightDiagonal[row + col] = placedRows[row] = true;
    arr[row][col] = 'Q';
}

void removeQueen(int row, int col) {
    leftDiagonal[row - col + 7] = rightDiagonal[row + col] = placedRows[row] = false;
    arr[row][col] = '.';
}

void countWays(int currentColumn) {
    if (currentColumn == 8) {
        ans++;
        return;
    }

    for (int row = 0; row < 8; row++) {
        if (isSafe(row, currentColumn)) {
            placeQueen(row, currentColumn);
            countWays(currentColumn + 1);
            removeQueen(row, currentColumn);
        }
    }
}

int main() {
    arr = vector<vector<char>>(8);
    ans = 0;

    for (int i = 0; i < 8; i++) {
        arr[i] = vector<char>(8);
        for (int j = 0; j < 8; j++) {
            cin >> arr[i][j];
        }
    }

    countWays(0);
    cout << ans << endl;

    return 0;
}
