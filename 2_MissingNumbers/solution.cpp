#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;

    // Calculate the expected sum of numbers from 1 to n
    long long expectedSum = (1LL * n * (n + 1)) / 2;

    // Calculate the sum of the given (n-1) numbers
    long long actualSum = 0;
    for (int i = 0; i < n - 1; ++i) {
        int num;
        cin >> num;
        actualSum += num;
    }

    // Calculate and print the missing number
    cout << expectedSum - actualSum << "\n";

    return 0;
}
