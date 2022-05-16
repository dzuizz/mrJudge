#include <iostream>
using namespace std;

int main(){
    int n, small, big, x;
    cin >> n >> small >> big;
    x = small-small%n;
    if(x<small){
        x += n;
    }
    while (x<=big){
        cout << x << endl;
        x += n;
    }
}