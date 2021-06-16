#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string s;
    getline(cin, s);
    n = stoi(s);
    getline(cin, s);
    for(int i=0;i<n;i++){
        cout << s << endl;
    }
}