#include <iostream>
using namespace std;
typedef long long ll;

int main(){
    ll x, y;
    cin >> x >> y;
    ll a=x, b=y, rem=1;
    while(rem>0){
        rem = a%b;
        a = b;
        b = rem;
    }
    cout << x/a << "/" << y/a;
}