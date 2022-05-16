#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int l = 1; l < i; l++) cout << l << " ";
        for (int l = 0; l < 2*n-2*i; l++) cout << i << " ";
        for (int l = i; l >= 1; l--) cout << l << (l > 1 ? " " : "");
        cout << endl;
    }
    for (int i = n - 1; i > 0; i--) {
        for (int l = 1; l < i; l++) cout << l << " ";
        for (int l = 0; l < 2*n-2*i; l++) cout << i << " ";
        for (int l = i; l >= 1; l--) cout << l << (l > 1 ? " " : "");
        cout << endl;
    }
}