#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        long long total_ways = 1LL * k * k * (k * k - 1) / 2;

        if (k > 2) {
            total_ways -= 4 * (k - 1) * (k - 2);
        }

        cout << total_ways << endl;
    }

    return 0;
}
