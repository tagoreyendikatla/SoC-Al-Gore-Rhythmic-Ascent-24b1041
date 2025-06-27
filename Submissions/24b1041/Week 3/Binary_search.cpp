//Here we search the element by eleminating the half side of an array where 
//we can confirm the element cannot be there, for this the array should be sorted.
//time complexity=O(logn)
//space complexity=O(logn)
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int low,int high,int x){
    if(high>=low){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){return mid;}
        else if(arr[mid]>x){return binary_search(arr,low,mid-1,x);}
        else{return binary_search(arr,mid+1,high,x);}
    }
    return -1;
}
int main(){
    int array[10]={12,15,23,28,34,36,45,56,69,79};
    int x=10;
    int result=binary_search(array,0,9,x);
    cout<<result;
}