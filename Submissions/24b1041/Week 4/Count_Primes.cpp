#include<bits/stdc++.h>
using namespace std;

void primes(int n){
    vector<int> res;
    for(int i=0;i<=n;i++){
        res.push_back(0);
    }
    for(int i=2;i<=n;i++){
        if(res[i]!=0){continue;}
        for(int j=i*2;j<=n;j=j+i){
            res[j]=i;
        }
    }
    for(int i=2;i<=n;i++){
        if(res[i]==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    primes(n); 
}