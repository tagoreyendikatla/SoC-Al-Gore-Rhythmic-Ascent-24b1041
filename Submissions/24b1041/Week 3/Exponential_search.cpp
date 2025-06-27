#include<bits/stdc++.h>
using namespace std;

bool binary_search(vector<int> arr,int low,int high,int x){
    if(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){return true;}
        else if(arr[mid]>x){return binary_search(arr,low,mid-1,x);}
        else{return binary_search(arr,mid+1,high,x);}
    }
    return false;
} 

bool exponentialSearch(vector<int> arr, int n){
    int i=1;
    int prev=0;
    sort(arr.begin(), arr.end());
    int s=arr.size();
    while(i<=s-1){
        if(arr[i]>=n){
            break;
        }else{
            prev=i;
            i*=2;
        }
    }
    bool res=binary_search(arr, prev, min(i, s-1), n);
    return res;
}
int main(){
    vector<int> arr={12, 34, 56, 78, 90, 13, 24, 46, 68, 71};
    int n;
    cin>>n;
    bool res=exponentialSearch(arr, n);
    cout<<res;
}