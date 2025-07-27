#include<bits/stdc++.h>
using namespace std;

class Disjoint{
    vector<int> rank;
    vector<int> parent;
    public:
    Disjoint(int n){
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i=1;i<=n;i++){
            parent[i]=i;
        }
    }
    int findUParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node]=findUParent(parent[node]);
    }
    void unionByrank(int u, int v){
        int ul_u = findUParent(u);
        int ul_v = findUParent(v);
        if(ul_u == ul_v){return;}
        if(rank[ul_u]<rank[ul_v]){
            parent[ul_u]= ul_v;
        }
        else if(rank[ul_u]>rank[ul_v]){
            parent[ul_v]=ul_u; 
        }else{
            parent[ul_u]= ul_v;
            rank[ul_v]++;
        }
    }
};
int main(){
    Disjoint ds(7);
    ds.unionByrank(1,2);
    ds.unionByrank(2,3);
    ds.unionByrank(4,5);
    ds.unionByrank(6,7);
    ds.unionByrank(5,6);
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<true;
    }else{
        cout<<false;
    }
    ds.unionByrank(3,7);
    if(ds.findUParent(3)==ds.findUParent(7)){
        cout<<true;
    }else{
        cout<<false;
    }
}