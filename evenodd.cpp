#include <iostream>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> s;
        if((int)s.back()%2==0){
            cout << "even\n";
        }else{
            cout << "odd\n";
        }
    }
}