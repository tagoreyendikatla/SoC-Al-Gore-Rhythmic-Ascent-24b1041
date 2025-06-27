//Depth-First Search
#include<bits/stdc++.h>
using namespace std;

void dfs(int node, vector<bool>& visited, vector<vector<int>>& graph){
    visited[node]=true;
    cout<<node<<" ";
    for(int neighbor : graph[node]){
        if(!visited[neighbor]){
            dfs(neighbor, visited, graph);
        }
    }
}
int main(){
    vector<vector<int>> graph={{1,2},{0,3,4},{0,5},{1},{1},{2}};
    int start=0;
    vector<bool> visited(graph.size(),false);
    dfs(start, visited, graph);
}