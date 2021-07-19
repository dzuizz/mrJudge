#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, min=INT_MAX;
    cin >> n;
    string s, mins="";
    for(int i=0;i<n;i++){
        cin >> s;
        if(s.length()<min){
            min = s.length();
            mins = s;
        }
    }
    cout << mins << endl;
}