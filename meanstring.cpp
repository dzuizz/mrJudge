#include <iostream>
using namespace std;

int main(){
    int n, e, total=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        total += e;
    }
    cout << total/n << endl;
}