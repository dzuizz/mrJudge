#include <algorithm>
#include <iostream>
using namespace std;
typedef long long ll;

int days=1, ind, ans;

int main() {
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    while (ind < n) {
        if (a[ind] >= days) ans++;
        else {
            while (ind < n && a[ind] < days) ind++;
            if (ind < n) ans++;
        }
        ind++, days++;
    }
    cout << ans << endl;
}