#include <iostream>
using namespace std;

int main(){
    int x, y, t=0;
    cin >> x >> y;
    char c;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> c;
            if(c=='#'){
                t++;
            }
        }
    }
    cout << t << endl;
}