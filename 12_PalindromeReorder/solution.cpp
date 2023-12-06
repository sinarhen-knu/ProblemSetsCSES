#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    string str;
    cin >> str;

    vector<int> cnt(26, 0);

    // Count the frequency of each character in the string
    for (char ch : str) {
        cnt[ch - 'A']++;
    }

    int oddPos = -1;

    // Check for the presence of more than one character with an odd count
    for (int i = 0; i < 26; i++) {
        if (cnt[i] % 2 == 1) {
            if (oddPos == -1) {
                oddPos = i;
            } else {
                cout << "NO SOLUTION";
                return 0;
            }
        }
    }

    // Handle cases where palindrome permutation is not possible
    if ((oddPos != -1 && str.length() % 2 == 0) || (oddPos == -1 && str.length() % 2 == 1)) {
        cout << "NO SOLUTION";
        return 0;
    }

    // Build the first half of the palindrome
    string ans;
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < cnt[i] / 2; j++) {
            ans += (char)('A' + i);
        }
    }

    // Print the palindrome
    cout << ans;

    // Print the middle character (if exists)
    if (oddPos != -1) {
        cout << (char)('A' + oddPos);
    }

    // Print the reversed first half of the palindrome
    reverse(ans.begin(), ans.end());
    cout << ans;

    return 0;
}
