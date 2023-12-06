#include <iostream>
#include <vector>
#include <climits>
 
using namespace std;
 
int main() 
{
    long long n;
    cin >> n;
    long long ans = LLONG_MAX;
 
    vector<long long> p(n);
    long long tot = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        tot += p[i];
    }
 
    for (long long i = 0; i < 1 << n; i++)
    {
        long long s = 0;
        for (long long j = 0; j < n; j++)
        {
            if (i & 1 << j)
                s += p[j];
        }
        long long curr = abs((tot - s) - s);
        ans = min(ans, curr);
    }
    cout << ans << endl;
    return 0;
}