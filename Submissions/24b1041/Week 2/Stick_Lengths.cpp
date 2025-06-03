#include<bits/stdc++.h>
using namespace std;

long long cost(long long arr[], long long k, long n){
    long long sum=0;
    for(long i=0;i<n;i++){
        sum+=abs(arr[i]-k);
    }
    return sum;
}
long long Stick(long long arr[], int n){
    sort(arr, arr+n);
    long long median;
    if(n%2==0){median=arr[n/2];return cost(arr,median,n);}
    else{median=arr[n/2];return min(cost(arr,median-1,n), cost(arr,median,n));}
}
int main(){
    long n;
    cin>>n;
    long long arr[n];
    for(long i=0;i<n;i++){
        cin>>arr[i];
    }
    long long x=Stick(arr, n);
    cout<<x;
}