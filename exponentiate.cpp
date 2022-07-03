#include <iostream>
using namespace std;
typedef long long ll;

ll m;

// Power function
ll pow(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    ll res = pow(a, b/2) % m;
    res = (res * res) % m;
    if (b % 2 == 1) res = (res * a)%m;
    return res;
}

int main() {
    ll t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b >> m;
        a %= m;
        cout << pow(a, b)%m << endl;
    }
}
