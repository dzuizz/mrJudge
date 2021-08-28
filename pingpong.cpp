#include <iostream>
using namespace std;

string winner(string S) {
    int ppt=0, cpt=0, p=0, c=0;
    for(int i=0;i<S.size();i++){
        if(S[i]=='P') ppt++;
        else cpt++;

        if(ppt>=11 && ppt-cpt>=2){
            ppt = 0;
            cpt = 0;
            p++;
        }else if(cpt>=11 && cpt-ppt>=2){
            ppt = 0;
            cpt = 0;
            c++;
        }
    }
    if(p>c){
        return "Potato";
    }else{
        return "Rar";
    }
}