#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    string s; cin >> s;
    ll n; cin >> n;

    ll ind = 0;
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j < n - i; j++) cout << ' ';

        for (ll j = 0; j < i; j++) {
            cout << s[ind] << ' ';
            ind = (ind + 1) % s.size();
        }
        cout << '\n';
    }
}