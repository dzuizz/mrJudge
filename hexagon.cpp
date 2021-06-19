#include <iostream>
using namespace std;

int main(){
    int n, a=0;
    bool inc=true;
    cin >> n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<n-a-1;j++){
            cout << ' ';
        }
        for(int j=0;j<n+2*a;j++){
            cout << 'x';
        }
        cout << endl;
        if(a==n-1){
            inc = false;
        }if(inc){
            a++;
        }else{
            a--;
        }
    }
}