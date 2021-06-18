#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n, i=0, notes=0;
    int money[13]= {1000000, 500000, 100000, 50000, 10000, 5000, 1000, 500, 100, 50, 10, 5, 1};
    cin >> n;
    while(n>0){
        notes += (long long) n/money[i];
        //notes += (n-n%money[i])/money[i];
        n %= money[i];
        i++;
    }
    cout << notes << endl;
}