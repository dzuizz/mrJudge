#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    int r, c; cin >> r >> c;
    vector<vector<int> > v(r, vector<int>(c));

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> v[i][j];
        sort(v[i].begin(), v[i].end());
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c - 1; j++) cout << v[i][j] << " ";
        cout << v[i][c - 1] << '\n';
    }
}