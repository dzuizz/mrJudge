#include <iostream>
using namespace std;

int main(){
    int n, time, curtime=0;
    cin >> n >> time;
    while(n!=1){
        curtime++;
        if(curtime==time) break;
        if(n%2==0) n /= 2;
        else n = 3*n+1;
    }
    if(n==1 && curtime != time) cout << -1 << endl;
    else cout << n << endl;
}