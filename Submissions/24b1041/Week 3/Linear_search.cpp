#include<bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr, int target){
    int s=arr.size();
    for(int i=0;i<s;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> arr ={12,34,56,87,37,18,62,94,28};
    int n;
    cin>>n;
    int res=linearSearch(arr, n);
    cout<<res;
}