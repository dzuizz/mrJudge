#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n, v;
    cin >> n >> v;
    int coins[n], dp[v+1];
    dp[0] = 0;
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }
    for(int i=1;i<v+1;i++){
        dp[i] = INT_MAX;
        for(int j=0;j<n;j++){
            if(coins[j]<=i && dp[i-coins[j]]<INT_MAX){
                dp[i] = min(dp[i], dp[i-coins[j]] + 1);
            }
        }
    }
    switch (dp[v])
    {
    case INT_MAX:
        cout << -1 << endl;
        break;
    
    default:
        cout << dp[v] << endl;
        break;
    }
}