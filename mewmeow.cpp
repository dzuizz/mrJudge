#include <iostream>
using namespace std;

int main(){
    int n, m=0, f=0;
    cin >> n;
    string s;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="MEOW"){
            f++;
        }else if(s=="MEW"){
            m++;
        }
    }
    if(m>0){
        cout << (f-(f%m))/m << endl;
    }else{
        cout << "OMG MEEEAHHHH!!!!\n";
    }
}