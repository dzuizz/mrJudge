#include <iostream>
using namespace std;

int main(){
    long long start, end, a, b;
    cin >> start >> end >> a >> b;
    for(long long i=start;i<=end;i++){
        if(i%a==0){
            if(i%b==0){
                cout << "FizzBuzz\n";
            }
            else{
                cout << "Fizz\n";
            }
        }else if(i%b==0){
            cout << "Buzz\n";
        }else{
            cout << i << endl;
        }
    }
}