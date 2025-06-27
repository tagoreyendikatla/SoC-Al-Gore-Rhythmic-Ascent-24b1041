//Breadth-First Search
#include<bits/stdc++.h>
using namespace std;

void bfs(int start, vector<bool>& visited, vector<vector<int>>& graph){
    queue<int> q;
    q.push(start);
    visited[start]=true;
    while (!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";
        for(int neighbor : graph[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }
    
}
int main(){
    vector<vector<int>> graph={{1,2},{0,3,4},{0,5},{1},{1},{2}};
    int start=0;
    vector<bool> visited(graph.size(),false);
    bfs(start,visited, graph);
}