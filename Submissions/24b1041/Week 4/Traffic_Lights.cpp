#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,s;
    cin>>n>>s;
    vector<int> positions(s);
    for(int i=0;i<s;i++){
        cin>>positions[i];
    }
    set<int> lights;
    lights.insert(0);
    lights.insert(n);

    multiset<int> segments;
    segments.insert(n);

    vector<int> output;
    for(int p: positions){
        auto it=lights.upper_bound(p);
        int right =*it;
        --it;
        int left=*it;

        segments.erase(segments.find(right-left));
        segments.insert(right-p);
        segments.insert(p-left);

        lights.insert(p);
        output.push_back(*segments.rbegin());
    }
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<" ";
    }
}