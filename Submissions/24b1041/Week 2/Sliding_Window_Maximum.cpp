#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1){return nums;}
        vector<int> v;
        int s=nums.size();
        int i=0, j=k-1;
        int x=0;
        int Max=nums[0];
        for(int i=0;i<k;i++){
            if(Max<=nums[i]){
                Max=nums[i];
                x=i;
            }
        }
        i++;
        j++;
        v.push_back(Max);
        while(j<s){
            if(x!=i-1){
                if(nums[j]>nums[x]){v.push_back(nums[j]);Max=nums[j];}
                else{v.push_back(Max);}
            }else{
                Max=nums[i];
                for(int t=i;t<=j;t++){
                    if(Max<=nums[t]){
                        Max=nums[t];
                        x=t;
                    }
                }
                v.push_back(Max);
            }
            i++;
            j++;
        }
        return v;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    vector<int> res;
    int k;
    cin>>k;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    res=maxSlidingWindow(arr, k);
    for(int x : res){
        cout<<x<<" ";
    }
}