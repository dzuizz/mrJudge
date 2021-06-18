#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, e, maxtotal=0, total = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        if(e>=0){
            total += e;
        }else{
            if(total>maxtotal){
                maxtotal = total;
            }
            total = 0;
        }
    }
    if(total>maxtotal){
        maxtotal = total;
    }
    cout << maxtotal << endl;
}