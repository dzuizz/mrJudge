#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, temp;
    int a[2000];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int x=0;x<n-1;x++){
        for(int y=0;y<n-x-1;y++){
            if(a[y]>a[y+1]){
                temp = a[y];
                a[y] = a[y+1];
                a[y+1] = temp;
            }
        }
    }
    for(int i=0;i<n-1;i++) cout << a[i] << " ";
    cout << a[n-1] << endl;
}