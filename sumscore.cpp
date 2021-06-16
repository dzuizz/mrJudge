#include <iostream>
using namespace std;

int main(){
    int n=0, t=0;
    while(n!=-1){
        t += n;
        cin >> n;
    }
    cout << t << endl;
}