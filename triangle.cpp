#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int a=0;a<i;a++){
            cout << "*";
        }
        cout << endl;
    }
}