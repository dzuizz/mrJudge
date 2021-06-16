#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<short> v;
    int n;
    short e;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    for(int i=0;i<n-1;i++){
        cout << v[i] << " ";
    }
    cout << v[n-1] << endl;
}