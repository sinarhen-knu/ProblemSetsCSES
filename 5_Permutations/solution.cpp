#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    // Check if a beautiful permutation is possible
    if (n == 1) {
        cout << "1\n";
    } else if (n < 4) {
        cout << "NO SOLUTION\n";
    } else {
        vector<int> even, odd;

        for (int i = 2; i <= n; i += 2) {
            even.push_back(i);
        }

        for (int i = 1; i <= n; i += 2) {
            odd.push_back(i);
        }

        for (int i = 0; i < even.size(); ++i) {
            cout << even[i] << " ";
        }

        for (int i = 0; i < odd.size(); ++i) {
            cout << odd[i] << " ";
        }

        cout << "\n";
    }

    return 0;
}
