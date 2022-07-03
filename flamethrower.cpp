#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
        int sum = 0;
        for (int j = 0; j < k; j++) {
            sum += a[i + j];
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
