#include <iostream>
using namespace std;

int main(){
    int n, total=0, e;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        total += e;
    }
    cout << total << endl;
}