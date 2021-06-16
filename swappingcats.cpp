#include <iostream>
using namespace std;

int seats[10000];
int main(){
    int n, s, a, b, temp;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        seats[i] = i;
    }
    for(int i=0;i<s;i++){
        cin >> a >> b;
        temp = seats[b];
        seats[b] = seats[a];
        seats[a] = temp;
    }
    for(int i=0;i<n;i++){
        cout << seats[i] << "\n";
    }
}