#include <iostream>
using namespace std;

int main(){
    int n, e;
    int gifts[20000];
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> e;
        gifts[e]= i;
    }
    for(int i=1;i<n;i++){
        cout << gifts[i] << endl;
    }
    cout << gifts[n];
}