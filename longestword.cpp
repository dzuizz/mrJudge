#include <iostream>
using namespace std;

int main(){
    int n;
    string s,longeststring="";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s.length()>longeststring.length()){
            longeststring = s;
        }
    }
    cout << longeststring << endl;
}