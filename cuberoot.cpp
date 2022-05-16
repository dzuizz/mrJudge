#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll n; cin >> n;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        cout << cbrt(x) << endl;
    }
}