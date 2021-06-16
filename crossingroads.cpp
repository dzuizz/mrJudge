#include <iostream>
using namespace std;

int main(){
    int l, s, h;
    cin >> l >> s >> h;
    if((s+h)>l-s+l-h){
        cout << l-s+l-h << endl;
    }else{
        cout << s+h << endl;
    }
}