#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, e, price_paid=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        v.push_back(e);
    }
    sort(v.begin(),v.end(),greater<int>());
    while(v.size()>=4){
        price_paid+=v[0]+v[1]+v[2];
        for(int i=0;i<4;i++) v.erase(v.begin());
    }if(v.size()>0){
        for(int i=0;i<v.size();i++){
            price_paid += v[i];
        }
    }
    cout << price_paid << endl;
}