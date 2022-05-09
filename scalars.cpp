#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n; cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> b[i];

    sort(a, a+n);
    sort(b, b+n, greater<ll>());

    ll ans = 0;
    for (ll i = 0; i < n; i++) ans += a[i] * b[i];
    cout << ans << endl;
}