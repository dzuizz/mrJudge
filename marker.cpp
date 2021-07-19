#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n, a, b, ab;
    int ans[2] = {0, 0};
    char sign;
    cin >> n;
    for(int person=0; person<2; person++){
        for(int i=0;i<n;i++){
            scanf("%d %c %d = %d", &a, &sign, &b, &ab);
            if(sign=='+' && a+b==ab){
                ans[person]++;
            }else if(sign=='-' && a-b==ab){
                ans[person]++;
            }
        }
    }
    printf("Spongebob: %d\nPatrick: %d", ans[0], ans[1]);
}