#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<vector<int> > tri(27, vector<int>(27, 0));

int main() {
    tri[1][1] = 1;
    
    for (int i = 2; i < 26; i++) {
        tri[i][1] = 1;
        for (int j = 2; j < i; j++) {
            tri[i][j] = tri[i-1][j-1] + tri[i-1][j];
        }
        tri[i][i] = 1;
    }

    int r, c; cin >> r >> c;
    cout << tri[r][c] << '\n';
}
