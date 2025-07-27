#include<bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> MST(int V,vector<vector<pair<int, int>>> edges, int s){
    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<tuple<int, int, int>>> pq;
    vector<int> visited(V, 0);
    vector<tuple<int, int, int>> res;
    pq.push({0, -1, s});
    while(!pq.empty()){
        auto [u, v, w]=pq.top();
        pq.pop();
        if(visited[v]) continue;
        visited[v]=1;
        if(u != -1){
            res.push_back({u, v, w});
        }
        for(auto neighbor : edges[v]){
            if(!visited[neighbor.first]){
                pq.push({neighbor.second, v, neighbor.first});
            }
        }
    }
    return res;
}
int main(){
    vector<vector<pair<int, int>>> edges ={{{1,3},{4,5}},{{0,3},{2,5},{4,6}},{{1,5},{3,9},{5,3}},{{2,9},{5,7}},{{0,5},{1,6},{5,2}},{{2,3},{3,7},{4,2}}};
    vector<tuple<int, int, int>> res = MST(6,edges, 0);
    cout<<0<<" ";
    int sum=0;
    for(int i=0;i<res.size();i++){
        auto [u, v, w]=res[i];
        cout<<v<<" ";
        sum+=w;
   }
    cout<<endl<<sum;
}