#include <iostream>
#include <vector>
#include <cmath>

typedef long long ll;

using namespace std;

void cal(vector<ll>& v) {
    for (ll i = 1; i <= 17; i++) {
        v[i] = (9 * i * pow(10, i - 1));
    }
}

ll calculateDigit(ll k) {
    vector<ll> v(18, 0);
    cal(v);

    ll sum = 0;
    ll length_of_number = 0;

    for (ll i = 0; i <= 17; i++) {
        sum += v[i];
        if (sum <= k) {
            length_of_number = i + 1;
        } else {
            break;
        }
    }

    sum -= v[length_of_number];
    ll difference = k - sum;
    ll starting_number = pow(10, length_of_number - 1);
    ll distance_from_starting_number = (difference / length_of_number);
    ll actual_number = starting_number + distance_from_starting_number - 1;
    ll remainder = difference % length_of_number;

    if (remainder == 0) {
        return actual_number % 10;
    } else {
        actual_number++;
        remainder = length_of_number - remainder;
        while (remainder--) {
            actual_number /= 10;
        }
        return actual_number % 10;
    }
}

void solve() {
    ll query = 1;
    cin >> query;

    while (query--) {
        ll k;
        cin >> k;
        cout << calculateDigit(k) << endl;
    }
}

int main() {
    solve();
    return 0;
}
