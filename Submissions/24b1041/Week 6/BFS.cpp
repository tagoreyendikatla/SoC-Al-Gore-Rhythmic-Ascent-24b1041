#include<bits/stdc++.h>
using namespace std;

void bfs(int node, vector<vector<int>> graph, vector<bool>& visited, queue<int>& queue){
    visited[node]=true;
    queue.push(node);

    while(!queue.empty()){
        int neighbour = queue.front();
        cout<<queue.front()<<" ";
        queue.pop();
        for(auto i : graph[neighbour]){
            if(!visited[i]){
                visited[i]=true;
                queue.push(i);
            }
        }
    }
}
int main(){
    vector<vector<int>> graph={{1,3},{0,2,4},{1,4},{0},{1,2}};
    int start=0;
    queue<int> queue;
    vector<bool> visited(graph.size(), false);
    bfs(start, graph, visited, queue);
}