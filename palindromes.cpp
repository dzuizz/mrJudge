#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s, c;
    cin >> s;
    for(int i=0;i<s.size();i++) s[i] = tolower(s[i]);
    c = s;
    reverse(s.begin(), s.end());
    if(c==s) cout << "Yes\n";
    else cout << "No\n";
}