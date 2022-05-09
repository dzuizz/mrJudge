#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll n, x;
vector<ll> v;

int main() {
    cin >> n >> x;
    v.push_back(x);
    
    for (int i = 1; i < n; i++) {
        cin >> x;
        while (!v.empty() && v.back() <= x) v.pop_back();
        v.push_back(x);
    }
    for (auto i = v.end()-1; i >= v.begin(); i--) cout << *i << "\n";
}