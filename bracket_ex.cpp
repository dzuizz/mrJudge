#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

vector<char> v;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    v.push_back(s[0]);
    bool flag = 1;
    for (char ch : s) {
        if (flag) {
            flag = 0;
            continue;
        }
        if (ch == '(' || ch == '[' || ch == '{') v.push_back(ch);
        else if (ch == ')' && v.back() == '(') v.pop_back();
        else if (ch == ']' && v.back() == '[') v.pop_back();
        else if (ch == '}' && v.back() == '{') v.pop_back();
        else {
            cout << "Invalid\n";
            return 0;
        }
        // for (auto i : v) cout << i << " ";
    }
    if (v.size() > 0) cout << "Invalid\n";
    else cout << "Valid\n";
}