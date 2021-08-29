#include <iostream>
using namespace std;

int main(){
    int n, ob=0;
    string s;
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            ob++;
        }else{
            if(ob>0){
                ob--;
            }else{
                ob--;
                break;
            }
        }
    }
    if(ob==0){
        cout << "Valid\n";
    }else{
        cout << "Invalid\n";
    }
}