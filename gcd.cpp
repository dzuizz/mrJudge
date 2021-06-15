#include <iostream>
using namespace std;

int gcd(int x, int y){
    if(y==0)
        return x;
    return gcd(y, x%y);
}

int main(){
    int a, b, c;
    cin >> a >> b;
    /*while(a != b){
        c = max(a, b) - min(a, b);
        a = min(a, b);
        b = c;
    }*/
    cout << gcd(a, b) << endl;
}