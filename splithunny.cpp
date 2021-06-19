#include <iostream>
#include <vector>
using namespace std;

int main(){
    int r, c, pools=0, x, y;
    char s;
    cin >> r >> c;
    vector<vector<int> > graph;
    vector<pair<int, int> > cors;
    for(int i=0;i<r;i++){
        vector<int> v;
        for(int j=0;j<c;j++){
            cin >> s;
            if(s=='.'){
                v.push_back(0);
            }else{
                v.push_back(-1);
            }
        }
        graph.push_back(v);
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(graph[i][j]==-1){
                pools++;
                pair<int, int> p(i, j);
                cors.push_back(p);
                graph[i][j] = pools;
                while(cors.size()>0){
                    pair<int, int> cur = cors[cors.size()-1];
                    x = cur.first;
                    y = cur.second;
                    int before = cors.size();
                    if(x<r-1){
                        if(graph[x+1][y]==-1){
                            cors.push_back(make_pair(x+1, y));
                            graph[x+1][y] = pools;
                        }
                    }
                    if(x>0){
                        if(graph[x-1][y]==-1){
                            cors.push_back(make_pair(x-1, y));
                            graph[x-1][y] = pools;
                        }
                    }
                    if(y<c-1){
                        if(graph[x][y+1]==-1){
                            cors.push_back(make_pair(x, y+1));
                            graph[x][y+1] = pools;
                        }
                    }
                    if(y>0){
                        if(graph[x][y-1]==-1){
                            cors.push_back(make_pair(x, y-1));
                            graph[x][y-1] = pools;
                        }
                    }
                    if(cors.size()==before){
                        cors.pop_back();
                    }
                }
            }
        }
    }
    cout << "Oh, bother. There are " << pools << " pools of hunny.\n";
}