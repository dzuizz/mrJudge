#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

ll cur = 1, ans;

int main() {
    string s; cin >> s;
    reverse(s.begin(), s.end());
    for (char ch : s) {
        ans += (ch - '0') * cur;
        cur *= 2;
    }
    cout << ans << endl;
}