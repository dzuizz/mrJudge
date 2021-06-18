#include <cstdio>
#include <vector>
using namespace std;

class Card {
public:
    int data;
    Card* next;
};

int main(){
    int m, k;
    char move = '|';
    scanf("%d %d", &m, &k);
    Card* head = NULL;
    Card* tail = NULL;
    for(int i=m-1;i>=0;i--){
        Card* card = new Card();
        card->data = i;
        card->next = head;
        head = card;
        if(i==m-1){
            tail = card;
        }
    }
    while(move != '.'){
        scanf("%c", &move);
        if(move=='A'){
            tail->next = head;
            tail = head;
            head = head->next;
            tail->next = NULL;
        }else if(move=='B'){
            Card* second = head->next;
            tail->next = second;
            head->next = second->next;
            second->next = NULL;
            tail = tail->next;
        }
    }
    for(int i=0;i<k-1;i++){
        head = head->next;
    }
    printf("%d %d %d", head->data, head->next->data, head->next->next->data);

    /*vector<int> cards;
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
    printf("%d %d %d", cards[k-1], cards[k], cards[k+1]);*/
}