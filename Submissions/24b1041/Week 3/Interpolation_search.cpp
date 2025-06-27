#include<bits/stdc++.h>
using namespace std;

int interpolationSearch(vector<int> arr, int target){
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int pos = start+((target-arr[start])*(end-start))/(arr[end]-arr[start]);
        if(arr[pos]==target){return pos;}
        else if(arr[pos]<target){start=pos+1;}
        else{end=end-1;}
    }
    return -1;
}
int main(){
    vector<int> arr = {10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47};
    int target;
    cin>>target;
    int result = interpolationSearch(arr, target);
    cout<<result;
}