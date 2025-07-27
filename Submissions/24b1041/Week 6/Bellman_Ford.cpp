#include<bits/stdc++.h>
using namespace std;

vector<int> Bellman_Ford(int v, vector<vector<int>> edges, int s){
    vector<int> dist(v, 1e8);
    dist[s]=0;
    for(int i=0;i<=v-1;i++){
        for(auto e : edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            dist[v]=min(dist[v], dist[u]+w);
        }
    }
    return dist;
}
int main(){
    vector<vector<int>> edges={{3,4,2},{1,4,2},{1,3,3},{2,3,1},{0,1,5},{0,3,7},{0,2,3}};
    vector<int> res = Bellman_Ford(5, edges,0);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}