#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, e;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(),v.end(), greater<int>());
    for(int i=0;i<v.size()-1;i++)
        cout << v[i] << " ";
    cout << v[v.size()-1] << endl;
}