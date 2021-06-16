#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n, e, x, y;
    cin >> n >> e;
    int matrix[49][49];
    memset(matrix, 0, sizeof(int) * 49 * 49);
    for(int i=0;i<e;i++){
        cin >> x >> y;
        matrix[x-1][y-1]= 1;
        matrix[y-1][x-1]= 1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j];
        }
        cout << endl;
    }
}