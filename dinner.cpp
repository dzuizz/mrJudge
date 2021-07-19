#include <iostream>
using namespace std;

int main(){
    int h, w, potato=0, peanut=0;
    char c;
    cin >> h >> w;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> c;
            if(c=='O'){
                potato++;
            }else if(c=='N'){
                peanut++;
            }
        }
    }
    cout << potato << " " << peanut;
}