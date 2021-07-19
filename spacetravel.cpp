#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, s, time=0;
    cin >> n >> s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        time += 2*arr[i];
    }
    sort(arr, arr+n, greater<int>());
    for(int i=0;i<min(s, n);i++){
        time -= arr[i];
    }
    cout << time << endl;
}