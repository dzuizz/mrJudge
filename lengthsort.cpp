#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    string arr[n];
    int serialno[n];
    map<int, string> m;
    for(int i=n-1;i>=0;i--){
        cin >> arr[i];
        serialno[i] = arr[i].length()*1000+i;
        m[serialno[i]]= arr[i];
    }
    sort(serialno, serialno+n, greater<int>());
    for(int i=0;i<n;i++){
        cout << m[serialno[i]] << endl;
    }
}