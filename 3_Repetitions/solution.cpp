#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    string dnaSequence;
    cin >> dnaSequence;

    // Initialize variables to store the length of the current repetition and the maximum length
    int currentLength = 1;
    int maxLength = 1;

    // Iterate through the DNA sequence starting from the second character
    for (int i = 1; i < dnaSequence.length(); ++i) {
        // If the current character is the same as the previous one, increment the current repetition length
        if (dnaSequence[i] == dnaSequence[i - 1]) {
            currentLength++;
        } else {
            // If the current character is different, update the maximum length if needed and reset the current length
            maxLength = max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    // Update the maximum length one more time in case the longest repetition extends to the end of the sequence
    maxLength = max(maxLength, currentLength);

    // Print the result
    cout << maxLength << endl;

    return 0;
}
