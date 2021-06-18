#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, e, a, b;
    cin >> n >> e;
    vector<vector<int> > v;
    for(int i=0;i<n;i++){
        vector<int> vect;
        v.push_back(vect);
    }
    for(int i=0;i<e;i++){
        cin >> a >> b;
        v[a-1].push_back(b);
        v[b-1].push_back(a);
    }
    for(int i=0;i<n;i++){
        if(v[i].size()>0){
            for(int j=0;j<v[i].size()-1;j++){
                cout << v[i][j] << " ";
            }
            cout << v[i][v[i].size()-1];
            cout << "\n";
        }else{
            cout << "\n";
        }
    }
}