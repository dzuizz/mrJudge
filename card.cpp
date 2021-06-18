#include <cstdio>
#include <vector>
using namespace std;

int main(){
    int m, k;
    vector<int> cards;
    char move='h';
    scanf("%d %d", &m, &k);
    for(int i=0;i<m;i++){
        cards.push_back(i);
    }
    while(move != '.'){
        scanf("%c", &move);
        if(move=='A'){
            cards.push_back(cards[0]);
            cards.erase(cards.begin());
        }else if(move=='B'){
            cards.push_back(cards[1]);
            cards.erase(cards.begin()+1);
        }
    }
    printf("%d %d %d", cards[k-1], cards[k], cards[k+1]);
}