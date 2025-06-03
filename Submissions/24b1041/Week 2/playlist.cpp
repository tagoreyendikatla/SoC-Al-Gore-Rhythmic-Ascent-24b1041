#include<bits/stdc++.h>
using namespace std;

int LongestSubarray(int arr[], int n){
    if(n==0 || n==1){return n;}
    int start=0,end=1,res=1,fres=1;
    unordered_map<int, bool> map;
    map[arr[start]]=true;
    while(end<n){
        if(!map[arr[end]]){map[arr[end++]]=true;res=max(res,++fres);}
        else{
            while(arr[start]!=arr[end]){
                map[arr[start]]=false;
                start++;
            }
            start++;
            fres=end-start+1;
            end++;
        }
        res=max(res,fres);
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=LongestSubarray(arr,n);
    cout<<res;
}