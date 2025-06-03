#include<bits/stdc++.h>
using namespace std;

bool lessMin(long long arr[], long long target, long size){
    long c=0;
    for(long i=0;i<size;i++){
        if(arr[i]<target){return false;}
        else{c++;}
    }
    if(c==size){return true;}
    return false;
}
void sum(long long arr[], long size, long long target){
    if(lessMin(arr,target,size)){cout<<"IMPOSSIBLE";return;}
    unordered_map<long long, long> map;
    for(long i=0;i<size;i++){
        map[arr[i]]=i;
    }
    for(long i=0;i<size;i++){
        long long x=target-arr[i];
        if(lessMin(arr,x,size)){cout<<"IMPOSSIBLE";return;}
        for(long j=i+1;j<size;j++){
            long long y=x-arr[j];
            if(map.count(y) && map[y]!=i && map[y]!=j){
                cout<<map[y]+1<<" "<<i+1<<" "<<j+1;
                return;
            }
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
