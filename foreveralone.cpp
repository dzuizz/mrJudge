#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<bool> vis;

int main() {
    int n, m; cin >> n >> m;

    vis = vector<bool>(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b; cin >> a >> b;
        if (a == b) continue;
        vis[a] = vis[b] = 1;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (!vis[i]) ans++;
    }

    cout << ans << '\n';
}