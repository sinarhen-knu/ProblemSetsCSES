#include <iostream>

using namespace std;

int main() {
    // Зчитуємо вхідне число n
    long long n;
    cin >> n;

    // Виводимо значення n перед початком виконання алгоритму
    cout << n;

    // Виконуємо алгоритм, поки n не стане рівним 1
    while (n != 1) {
        // Якщо n парне, ділимо його на 2
        if (n % 2 == 0) {
            n /= 2;
        }
            // Якщо n непарне, множимо його на 3 і додаємо 1
        else {
            n = 3 * n + 1;
        }

        // Виводимо поточне значення n
        cout << " " << n;
    }

    return 0;
}
