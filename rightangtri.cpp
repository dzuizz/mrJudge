#include <iostream>
using namespace std;

int main(){
    int n, dots=1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int a=0;a<dots;a++){
            cout << "*";
        }
        cout << endl;
        dots++;
    }
}