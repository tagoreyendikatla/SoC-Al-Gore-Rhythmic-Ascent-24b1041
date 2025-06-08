#include<bits/stdc++.h>
using namespace std;

void sum(int arr[],int target, int size){
    unordered_map<int, int> map;
    for(int i=0;i<size;i++){
        map[arr[i]]=i;
    }
    for(int i=0;i<size;i++){
        int x=target-arr[i];
        if(map.count(x) && map[x]!=i){
            cout<<arr[i]<<" "<<x;
            return;
        }
    }
    cout<<"NOT POSSIBLE";
    return;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sum(arr,target,n);
}