#include<bits/stdc++.h>
using namespace std;

class hashing{
    public:
    vector<list<int>> hashtable;
    int size;

    hashing(int n){
        size=n;
        hashtable.resize(size);
    }

    int hashvalue(int key){
        return key%size; 
    }

    void add(int key){
        int index=hashvalue(key);
        hashtable[index].push_back(key);
    }

    auto search(int key){
        int index=hashvalue(key);
        return find(hashtable[index].begin(), hashtable[index].end(),key);
    }

    void Delete(int key){
        int index=hashvalue(key);
        if(search(key)!=hashtable[index].end()){
            hashtable[index].erase(search(key));
            cout<<key<<" is deleted"<<endl;
        }
        else{
            cout<<"key is not present in the hashtable";
        }
    }
};
int main(){
    hashing h(10);
    h.add(5);
    h.add(9);
    h.add(3);
    auto it=h.search(9);
    cout<<*it<<endl;
    h.add(19);
    auto a=h.search(19);
    cout<<*a<<endl;

    h.Delete(3);
    h.Delete(3);
}