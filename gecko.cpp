#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int r, c; cin >> r >> c;
    int graph[r][c];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> graph[i][j];
    }

    vector<vector<int> > cnt(r, vector<int>(c, 0));
    for (int i = 0; i < c; i++) cnt[r - 1][i] = graph[r - 1][i];

    for (int i = r - 2; i >= 0; i--) {
        for (int j = 0; j < c; j++) {
            cnt[i][j] = graph[i][j] + max(cnt[i + 1][max(0, j - 1)], max(cnt[i + 1][j], cnt[i + 1][min(c - 1, j + 1)]));
        }
    }

    int ans = 0;
    for (int i = 0; i < c; i++) {
        ans = max(ans, cnt[0][i]);
    }

    cout << ans << endl;
}
