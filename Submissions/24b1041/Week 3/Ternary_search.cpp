#include<bits/stdc++.h>
using namespace std;

int ternarySearch(vector<int> arr, int target){
    int start=0, end=arr.size()-1;
    while(start<=end){
        int mid1=start+(end-start)/3;
        int mid2=end-(end-start)/3;
        if(arr[mid1]==target){return mid1;}
        if(arr[mid2]==target){return mid2;}
        if(arr[mid1]>target){
            end=mid1-1;
        }
        else if(arr[mid2]<target){
            start=mid2+1;
        }else{
            start=mid1+1;
            end=mid2-1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target;
    cin>>target;
    int result = ternarySearch(arr, target);
    cout<<result;
}
