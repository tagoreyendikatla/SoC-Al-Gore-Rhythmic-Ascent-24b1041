#include<bits/stdc++.h>
using namespace std;

static const long long m =1e9+7;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long a,b,c;
        cin>>a>>b>>c;
        long long pow=1;
        b=b%(m-1);
        while(c>0){
            if(c%2==1){
                pow=(pow*b)%(m-1);
            }
            b=(b*b)%(m-1);
            c=c/2;
        }
        long long res=1;
        a=a%m;
        while(pow>0){
            if(pow%2==1){
                res=(res*a)% m;
            }
            a=(a*a)% m;
            pow=pow/2;
        }
        cout<<res<<endl;
    }
}