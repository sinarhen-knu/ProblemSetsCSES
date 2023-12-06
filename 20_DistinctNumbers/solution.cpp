#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{    
    int n;
    cin >> n;
 
    vector<int> values(n);
 
    for (int i = 0; i < n; ++i) 
    {
        cin >> values[i];
    }
 
    sort(values.begin(), values.end());
 
    int distinctCount = unique(values.begin(), values.end()) - values.begin();
 
    cout << distinctCount << endl;
 
    return 0;
}