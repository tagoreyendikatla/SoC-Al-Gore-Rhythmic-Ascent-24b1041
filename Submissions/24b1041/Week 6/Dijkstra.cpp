#include<bits/stdc++.h>
using namespace std;

vector<int> Dijkstra(int v, vector<vector<pair<int, int>>> edges, int s){
    vector<int> dist(v, 1e9);
    dist[s]=0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, s});
    while(!pq.empty()){
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();
        for(auto neighbor : edges[u]){
            int n = neighbor.first;
            int w = neighbor.second;
            if(dist[n]>d+w){
                dist[n]=d+w;
                pq.push({dist[n], n});
            }
        }
    }
    return dist;
}
int main(){
    vector<vector<pair<int, int>>> edges={{{1,5},{3,7},{2,3}},{{0,5},{3,3},{4,2}},{{0,3},{3,1}},{{0,7},{1,3},{2,1},{4,2}},{{1,2},{3,2}}};
    vector<int> res = Dijkstra(5, edges,0);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}