#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int ans;

int main() {
    int n; cin >> n;
    int day[n], night[n];
    for (int i = 0; i < n; i++) cin >> day[i];
    for (int i = 0; i < n; i++) cin >> night[i];
    int x; cin >> x;
    sort(day, day+n);
    sort(night, night+n, greater<int>());
    for (int i = 0; i < n; i++) {
        ans += max(0, day[i] + night[i] - x);
    }
    cout << ans * 100 << endl;
}