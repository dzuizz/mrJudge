#include <iostream>
using namespace std;

int main(){
    int n, a = 0;
    bool c=true;
    cin >> n;
    for(int i=0;i<n*2-1;i++){
        for(int j=0;j<n-a-1;j++){
            cout << " ";
        }
        for(int j=0;j<1+a*2;j++){
            cout << "*";
        }
        cout << "\n";
        if(a==n-1){
            c=false;
        }
        if(c==true){
            a++;
        }else{
            a--;
        }
    }
}