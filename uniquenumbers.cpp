#include <cstdio>
#include <unordered_set>
using namespace std;

int main(){
    int n, e;
    scanf("%d", &n);
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        scanf("%d", &e);
        s.insert(e);
    }
    printf("%lu\n", s.size());
}