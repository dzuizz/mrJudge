#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    string ans="Prime";
    cin >> n;
    if(n<2){
        ans = "Not Prime";
    }else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ans = "Not Prime";
                break;
            }
        }
    }
    cout << ans << endl;
}