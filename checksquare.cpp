#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(int(sqrt(n))*int(sqrt(n))==n){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }
}