#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, total=0;
    int price[20000], increment[20000];

    //vector<int> price, increment;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> price[i];

        //price.push_back(e);
    } for(int i=0;i<n;i++){
        cin >> increment[i];

        //increment.push_back(e);
    }for(int i=0;i<n;i++){
        int e=-1, ind=-1;
        for(int j=0;j<n;j++){
            if(increment[j]>e){
                e = increment[j];
                ind = j;
            }
        }
        total += price[ind] + e*i;
        price[ind] = -1;
        increment[ind] = -1;

        /*vector<int>::iterator it = max_element(increment.begin(), increment.end());
        vector<int>::iterator it2 = next(price.begin(), it - increment.begin());
        total += *it2 + *it * i;
        price.erase(it2);
        increment.erase(it);*/
    }
    cout << total << endl;
}