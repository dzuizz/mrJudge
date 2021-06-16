#include <iostream>
using namespace std;

int main(){
    string s, hello="Hello World";
    getline(cin, s);
    if(s==hello){
        cout << "OK\n";
    }else{
        cout << "Wrong Answer\n";
    }
}