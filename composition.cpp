#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        a[i] = 0;
        for (int j = 0; j < s.size(); j++) a[i] += tolower(s[j]) - 96;
    }

    sort(a, a + n, greater<int>());
    
    int ans = 0;
    for (int i = 0; i < m; i++) ans += a[i];
    cout << ans << '\n';
}