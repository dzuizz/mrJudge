#include <iostream>
using namespace std;

int main(){
    long long n, big=0, e, cur;
    bool alone=true;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> e;
        if(e>big){
            big = e;
            cur = i;
            alone = true;
        }else if(e==big){
            alone = false;
        }
    }
    if(alone){
        cout << cur << endl;
    }else{
        cout << "MMMMMEEEEOOOOOWWWW!!!!!\n";
    }
}