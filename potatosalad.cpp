#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, d, e, t=0;
    vector<int> v;
    cin >> n >> d;
    for(int i=0;i<n;i++){
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0;i<d;i++){
        t += v[i];
    }
    cout << t << endl;
}