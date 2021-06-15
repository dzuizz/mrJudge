#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b;
    while(a != b){
        c = max(a, b) - min(a, b);
        a = min(a, b);
        b = c;
    }
    cout << a << endl;
}