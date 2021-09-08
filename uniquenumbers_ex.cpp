#include <iostream>
#include <set>
using namespace std;
typedef long long ll;

int main(){
  ll n;
  cin >> n;
  string e;
  set<string> arr;
  for(int i=0;i<n;i++){
    cin >> e;
    arr.insert(e); 
  }
  cout << arr.size() << endl;
}