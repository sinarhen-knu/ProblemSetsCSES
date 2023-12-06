#include <iostream>

using namespace std;

long long solve(long long y, long long x) {
    long long maxCoord = max(y, x);
    long long base = (maxCoord - 1) * (maxCoord - 1);

    if (maxCoord % 2 == 0) {
        if (x == maxCoord) {
            return base + y;
        } else {
            return base + 2 * maxCoord - x;
        }
    } else {
        if (y == maxCoord) {
            return base + x;
        } else {
            return base + 2 * maxCoord - y;
        }
    }
}

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long y, x;
        cin >> y >> x;
        cout << solve(y, x) << endl;
    }

    return 0;
}
