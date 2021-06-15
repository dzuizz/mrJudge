#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a, n=40;
    double pt=0.8;
    cin >> a;
    if(a>79) cout << "4.0\n";
    else if(a>69) cout << "3.6\n";
    else{
        while(true){
            if(a<n){
                //cout << fixed << setprecision(1) << pt << endl;
                printf("%.1f", pt);
                break;
            }
            n += 5;
            pt += 0.4;
        }
    }
}