#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, max=0;
    cin >> n;
    int input[5100];
    int lis[5100];
    memset(input, 0, sizeof(int)*5100);
    memset(lis, 0, sizeof(int)*5100);
    for(int i=0;i<n;i++){
        cin >> input[i];
        lis[i]++;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(input[i]>input[j]){
                if(1+lis[j]>lis[i]){
                    lis[i]=lis[j]+1;
                }
            }
        }
    }
    for(int a=0;a<n;a++){
        if(lis[a]>max){
            max = lis[a];
        }
    }
    cout << max << endl;
}