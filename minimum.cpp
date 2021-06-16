#include <iostream>
#include <climits>
using namespace std;

int findMin(int n, int a[]){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    return min;
}