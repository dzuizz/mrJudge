#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, e, total=0;
    vector<int> price, increment;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> e;
        price.push_back(e);
    } for(int i=0;i<n;i++){
        cin >> e;
        increment.push_back(e);
    }for(int i=0;i<n;i++){
        vector<int>::iterator it = max_element(increment.begin(), increment.end());
        vector<int>::iterator it2 = next(price.begin(), it - increment.begin());
        total += *it2 + *it * i;
        price.erase(it2);
        increment.erase(it);
    }
    cout << total << endl;
}