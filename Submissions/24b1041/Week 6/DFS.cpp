#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<vector<int>> graph, vector<bool> &visited){
    
    visited[node]=true;
    cout<<node<<" ";
    for(auto i : graph[node]){
        if(!visited[i]){
            dfs(i, graph, visited);
        }
    }
}
int main(){
    vector<vector<int>> graph={{1,3},{0,2,4},{1,4},{0},{1,2}};
    int start=0;
    vector<bool> visited(graph.size(), false);
    dfs(start, graph, visited);
}