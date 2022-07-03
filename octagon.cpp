#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i - 1) * 2; j++) cout << ' ';
        for (int j = 0; j < n + i * 4; j++) cout << "*";
        cout << '\n';
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < 5 * n - 4; j++) cout << "*";
        cout << '\n';
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < (n - i - 1) * 2; j++) cout << ' ';
        for (int j = 0; j < n + i * 4; j++) cout << "*";
        cout << '\n';
    }
}