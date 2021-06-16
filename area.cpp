#include <iostream>
using namespace std;
int main(){
    long long n, l, h, sum = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> l >> h;
        sum += l*h;
    }
    cout << sum << endl;
}