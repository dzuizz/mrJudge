#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

#define num first
#define pow second

vector<pll> dsu;

ll find(ll n) {
    if (dsu[n].num == n) return n;
    return dsu[n].num = find(dsu[n].num);
}

void merge(ll a, ll b) {
    a = find(a); b = find(b);
    if (a == b) cout << "-1\n";
    else {
        ll res = (dsu[a].pow > dsu[b].pow ? a : b);
        if (res == a) dsu[b].num = a;
        else dsu[a].num = b;
        cout << res + 1 << endl;
    }
}

int main() {
    ll n, m; cin >> n >> m;
    dsu.resize(n);
    for (ll i = 0; i < n; i++) {
        dsu[i].num = i;
        cin >> dsu[i].pow;
    }

    for (ll i = 0; i < m; i++) {
        ll a, b; cin >> a >> b; a--; b--;
        merge(a, b);
    }
}