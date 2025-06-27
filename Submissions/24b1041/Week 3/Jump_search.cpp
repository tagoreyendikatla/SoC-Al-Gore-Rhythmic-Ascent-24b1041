#include<bits/stdc++.h>
using namespace std;

bool jumpSearch(vector<int>arr, int n){
    int s=arr.size();
    sort(arr.begin(), arr.end());
    int step=sqrt(s);
    int pos=0, prev=0;
    while(pos<=s-1){
        if(arr[pos]>=n){
            break;
        }else{
            prev=pos;
            pos=pos+step;
        }
    }
    int end=min(pos,s-1);
    
    for(int i=prev;i<=end;i++){
        if(arr[i]==n){
            return true;
        }
    }
    return false;   
}
int main(){
    vector<int> arr={12, 46, 96, 35, 85, 37, 62, 18, 24, 71};
    int n;
    cin>>n;
    bool res=jumpSearch(arr, n);
    cout<<res;
}