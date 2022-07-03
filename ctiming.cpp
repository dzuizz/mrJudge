#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    int d, h, m; cin >> d >> h >> m;

    int end = d * 24 * 60 + h * 60 + m;
    int start = 11 * 24 * 60 + 11 * 60 + 11;

    if (start > end) cout << "-1\n";
    else cout << (end - start) << '\n';
}
