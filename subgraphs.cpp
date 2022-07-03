#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;

vector<int> dsu;

int find(int n) {
    if (dsu[n] == n) return n;
    return dsu[n] = find(dsu[n]);
}

void merge(int a, int b) {
    a = find(a); b = find(b);
    dsu[a] = b;
}

int main() {
    int n, e; cin >> n >> e;
    dsu = vector<int>(n);

    for (int i = 0; i < n; i++) dsu[i] = i;

    for (int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;
        merge(a, b);
    }

    set<int> s;
    for (int i = 0; i < n; i++) s.insert(find(i));
    cout << s.size();
}
