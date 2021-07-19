#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, prev=1, cur;
    cin >> n;
    int ans[n];
    for(int i=0;i<n;i++){
        cin >> cur;
        int m = min(cur, cur+prev);
        ans[i] = m;
        prev = m;
    }
    int smallest = INT_MAX;
    for(int i=0;i<n;i++){
        if(ans[i]<smallest){
            smallest = ans[i];
        }
    }
    cout << smallest << endl;
}