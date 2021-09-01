#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int a=0;a<n-i;a++){
            cout << ' ';
        }
        cout << "/";
        for(int a=0;a<2*(i-1);a++){
            cout << " ";
        }
        cout << "\\\n";
    }
    for(int i=n;i>0;i--){
        for(int a=0;a<n-i;a++){
            cout << ' ';
        }
        cout << "\\";
        for(int a=0;a<2*(i-1);a++){
            cout << " ";
        }
        cout << "/\n";
    }
}