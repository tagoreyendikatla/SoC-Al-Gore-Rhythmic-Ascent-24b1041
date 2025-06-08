#include<bits/stdc++.h>
using namespace std;

int split(int arr[], int start, int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end;j++){
        if(arr[j]>pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[end]);
    return i+1;
}
int find(int arr[], int start, int end, int k){
    int x=split(arr,start,end);
    if(x+1==k){return arr[x];}
    if(x+1>k){x=find(arr,start,x-1,k);}
    else{x=find(arr,x+1,end,k);}
    return x;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int res=find(arr,0,n-1,k);
    cout<<res;
}