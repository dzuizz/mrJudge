#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(isdigit(s[0])==true){
        cout << stoi(s)*2;
    }else{
        for(int i=0;i<s.length();i++){
            cout << char(toupper(s[i]));
        }
        cout << endl;
    }
}