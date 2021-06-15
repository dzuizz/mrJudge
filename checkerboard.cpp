#include <iostream>
using namespace std;

int main(){
    int n;
    bool c=true, a=true;
    cin >> n;
    for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(c) cout << "o";
            else cout << "x";
            c = !c;
        }
        cout << "\n";
        c = !a;
        a = !a;
    }
}