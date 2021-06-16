#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a[26];
    memset(a, 0, sizeof(int) * 26);
    int n;
    cin >> n;
    char c;
    for(int i=0;i<n;i++){
        cin >> c;
        a[c-97]++;
    }
    for(int i=0;i<26;i++){
        cout << char(97+i) << " " << a[i] << endl;
    }
}