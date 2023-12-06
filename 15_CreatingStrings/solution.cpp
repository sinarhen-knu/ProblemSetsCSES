#include <iostream>
#include <vector>
#include <set>

using namespace std;

void generateStrings(const string& str, string current, set<string>& result, vector<bool>& used) {
    if (current.length() == str.length()) {
        result.insert(current);
        return;
    }

    for (int i = 0; i < str.length(); ++i) {
        if (!used[i]) {
            used[i] = true;
            generateStrings(str, current + str[i], result, used);
            used[i] = false;
        }
    }
}

int main() {
    string str;
    cin >> str;

    set<string> result;
    vector<bool> used(str.length(), false);
    generateStrings(str, "", result, used);

    cout << result.size() << endl;
    for (const string& s : result) {
        cout << s << endl;
    }

    return 0;
}
