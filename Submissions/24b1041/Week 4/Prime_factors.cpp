#include<bits/stdc++.h>
using namespace std;

vector<int> primeFactors(int n){
    vector<int> res;
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            res.push_back(i);
            n=n/i;
        }
    }
    if(n>1){
        res.push_back(n);
    }
    return res;
}
int main(){
    int n;
    cin >>n;
    vector<int> Prime_Factors= primeFactors(n);
    for(int i=0;i<Prime_Factors.size();i++){
        cout << Prime_Factors[i];
    }
}