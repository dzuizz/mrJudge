#include <iostream>
using namespace std;

int main(){
    int n, times=0;
    cin >> n;
    while(n>=2){
        n /= 2;
        times++;
    }
    cout << times << endl;
}