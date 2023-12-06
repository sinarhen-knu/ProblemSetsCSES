#include <iostream>

using namespace std;

const int MOD = 1000000007;

// Function to calculate (base^exponent) % MOD
long long power(long long base, long long exponent) {
    long long result = 1;
    base %= MOD;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }

        exponent /= 2;
        base = (base * base) % MOD;
    }

    return result;
}

int main() {
    int n;
    cin >> n;

    // Calculate 2^n % MOD using modular exponentiation
    long long result = power(2, n);

    cout << result << endl;

    return 0;
}
