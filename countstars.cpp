#include <iostream>
using namespace std;

int main(){
    int x, y, stars=0;
    char c;
    cin >> x >> y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> c;
            if(c=='*')
                stars++;
        }
    }
    cout << stars << endl;
}