#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=91) cout << "A*\n";
    else if(n>=75) cout << "A\n";
    else if(n>=60) cout << "B\n";
    else if(n>=50) cout << "C\n";
    else if(n>=35) cout << "D\n";
    else if(n>=20) cout << "E\n";
    else cout << "U\n";
}