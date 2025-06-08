//This is the most popular one, we divide the array into halves, then sort them both and
//merge them by comparing each element both arrays, recursively.
//time O(nlogn)
//space O(n)
/*Merge sort algorithm is based upon divide conquer merge.vDivide mean splitting the array into two halves, so depth of the recursionvis log n(since we divide by 2 each time)
And while merging since we process all n elements, it takes O(n)
Ans since at every level of recurion, merging takes place so time complexity is O(n log n).*/
#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int sl=mid-start+1;
    int sr=end-mid;
    vector<int> al(sl), ar(sr);
    for(int i=0;i<sl;i++){
        al[i]=arr[start+i];
    }
    for(int i=0;i<sr;i++){
        ar[i]=arr[mid+1+i];
    }
    int i=0, j=0, k=start;
    while(i<sl && j<sr){
        if(al[i]<=ar[j]){
            arr[k]=al[i];
            i++;
        }
        else{
            arr[k]=ar[j];
            j++;
        }
        k++;
    }
    while(i<sl){
        arr[k++]=al[i++];
    }
    while(j<sr){
        arr[k++]=ar[j++];
    }
}
void mergesort(int arr[], int start, int end){
    if(start>=end){return;}
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}