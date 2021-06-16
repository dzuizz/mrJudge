#include <iostream>
using namespace std;

int main(){
    int n, k, gifts=0, prev=0, time;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> time;
        if((time+k)<=prev){
            gifts++;
        }
        prev = time;
    }
    cout << gifts << endl;
}