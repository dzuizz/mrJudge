#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll n;
bool notPrime[104731];

int main() {
    vector<ll> primes;

    notPrime[0] = notPrime[1] = 1;
    for (ll i = 2; i < 104730; i++) {
        if (notPrime[i]) continue;
        primes.push_back(i);
        for (ll j = i * i; j < 104730; j += i) notPrime[j] = 1;
    }

    ll n; cin >> n;
    cout << primes[n-1] << endl;
}
