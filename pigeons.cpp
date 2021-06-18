#include <iostream>
using namespace std;

int main(){
    int n, m, no_of_pigeons=0;
    string s, ans = "PLAN ACCEPTED";
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> s;
        if(s=="LAND"){
            no_of_pigeons++;
        }else if(s=="LEAVE"){
            no_of_pigeons--;
        }else{
            no_of_pigeons=0;
        }
        if(no_of_pigeons>n){
            ans = "PLAN REJECTED";
            break;
        }
    }
    cout << ans << endl;
}