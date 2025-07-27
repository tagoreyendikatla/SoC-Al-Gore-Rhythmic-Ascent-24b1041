#include<bits/stdc++.h>
using namespace std;
const long long m= 1e9;
int main(){
    vector<vector<long long >> matrix(5, {m, m, m, m, m});
    vector<vector<pair<int, int>>> edges= {{{1,5},{3,9},{4,1}},{{0,5},{2,2}},{{1,2},{3,7}},{{0,9},{2,7},{4,2}},{{0,1},{3,2}}};
    for(int i=0;i<5;i++){
        matrix[i][i]=0;
        for(auto neighbor : edges[i]){
            matrix[i][neighbor.first]=neighbor.second;
        }
    }
    for(int k=0;k<5;k++){
        for(int i=0;i<5;i++){
            for(int j=0;j<5;j++){
                matrix[i][j]=min(matrix[i][j], matrix[i][k]+matrix[k][j]);
            }
        }
    }
    int n,m;
    cin>>n>>m;
    cout<<matrix[n][m];
}