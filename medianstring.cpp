#include <iostream>
using namespace std;

int main(){
    int n, e;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        if(i==(n-1)/2){
            cout << e << endl;
            break;
        }
    }
}