//We will find what is the value of x from where the y value is greater 
//than particular value in y=x^2
#include<bits/stdc++.h>
using namespace std;

int square(int x){
    return x*x;
}

int findX(int n){
    int start=0;
    int end=n;
    int mid, res;
    while(start<=end){
        mid=(start+end)/2;
        if(square(mid)>=n){
            res=mid;
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int res=findX(n);
    cout<<res;
}