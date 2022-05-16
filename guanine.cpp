#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

int n;
string s="", inp;

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> inp;
        if (inp == "ADD_BACK") {
            char e; cin >> e;
            s += e;
        }
        else if (inp == "ADD_FRONT") {
            char e; cin >> e;
            s = e + s;
        }
        else if (inp == "SNIP_FRONT") {
            int e; cin >> e; e++;
            s = s.substr(e, s.size() - e);
        }
        else if (inp == "SNIP_BACK") {
            int e; cin >> e;
            s = s.substr(0, e+1);
        }
        else {
            int e; cin >> e;
            cout << s[e] << endl;
        }
    }
}