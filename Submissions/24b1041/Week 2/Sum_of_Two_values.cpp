#include<bits/stdc++.h>
using namespace std;

void sum(long long arr[],long size, long long target){
    long count=0;
    unordered_map<long long, long> map;
    for(long i=0;i<size;i++){
        if(target<=arr[i]){count++;}
    }
    if(count==size){cout<<"IMPOSSIBLE";return;}
    for(long i=0;i<size;i++){
        map[arr[i]]=i;
    }
    for(int i=0;i<size;i++){
        int x=target-arr[i];
        if(map.count(x) && map[x]!=i){
            cout<<map[x]+1<<" "<<i+1;
            return;
        }
    }
    cout<<"IMPOSSIBLE";
}
int main(){
    long n;
    long long target;
    cin>>n>>target;
    long long arr[n];
    for(long i=0;i<n;i++){
        cin>>arr[i];
    }
    sum(arr,n,target);
}