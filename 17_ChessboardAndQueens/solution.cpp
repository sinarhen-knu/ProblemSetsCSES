#include <iostream>
#include <vector>
 
using namespace std;
 
vector<vector<char>> arr(8, vector<char>(8));
vector<bool> leftDiagonal(30);
vector<bool> rightDiagonal(30);
vector<bool> placedRows(30);
long long ans;
void foo(int currentColumn)
{
    if (currentColumn == 8)
    {
        ans++;
        return;
    }
 
    for (int row = 0; row < 8; row++)
    {
        if (arr[row][currentColumn] == '.' && leftDiagonal[row - currentColumn + 7] == false && rightDiagonal[row + currentColumn] == false && placedRows[row] == false)
        {
            leftDiagonal[row - currentColumn + 7] = rightDiagonal[row + currentColumn] = placedRows[row] = true;
            foo(currentColumn + 1);
            leftDiagonal[row - currentColumn + 7] = rightDiagonal[row + currentColumn] = placedRows[row] = false;
        }
    }
}
int main() 
{
    arr = vector<vector<char>>(8);
    ans = 0;
    for (int i = 0; i < 8; i++)
    {
        arr[i] = vector<char>(8);
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }
 
    foo(0);
    cout << ans << endl;
    return 0;
}