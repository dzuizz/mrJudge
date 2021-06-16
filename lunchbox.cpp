#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n, m, e, d=0, t=0, a=0;
    cin >> n >> m;
    vector<int> v;
    for(int i=0;i<m;i++){
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(), v.end());
    while(v[a] <= n-t && t<n && a<=v.size()-1){
        t += v[a];
        d++;
        a++;
    }
    cout << d << endl;
}
