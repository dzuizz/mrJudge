#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    ll a=0, b=0;
    for(ll i=0;i<s.size();i++){
        if(i%2==0) a += (int)s[i] - 48;
        else b += (int)s[i] - 48;
    }
    if((a-b)%11==0) cout << "YES\n";
    else cout << "NO\n";
}