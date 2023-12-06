#include <iostream>
#include <vector>
 
using namespace std;
 
void hanoi(int n, int source, int target, int auxiliary, vector<pair<int, int>>& moves) 
{
    if (n == 1) 
    {
        moves.push_back({ source, target });
        return;
    }
 
    hanoi(n - 1, source, auxiliary, target, moves);
    moves.push_back({ source, target });
    hanoi(n - 1, auxiliary, target, source, moves);
}
 
int main() 
{    
    int n;
    cin >> n;
    
    vector<pair<int, int>> moves;
    hanoi(n, 1, 3, 2, moves);
        
    cout << moves.size() << endl;
    for (const auto& move : moves) 
    {
        cout << move.first << " " << move.second << endl;
    }
 
    return 0;
}