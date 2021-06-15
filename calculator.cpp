#include <iostream>
using namespace std;

int main(){
    int a, b;
    char o;
    cin >> a >> o >> b;
    if(o=='+'){
        cout << a+b << endl;
    }else if(o=='*'){
        cout << a*b << endl;
    }else{
        cout << a-b << endl;
    }
}