#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node(int x){val=x;next=nullptr;}
    node* reverseList(node* head){
        if(head==nullptr || head->next==nullptr){return head;}
        node* a=head->next;
        head->next=nullptr;
        node* curr=head;
        while(a!=nullptr){
            node* temp=a->next;
            a->next=curr;
            curr=a;
            a=temp;
        }
        return curr;
    }
};
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    node* head=new node(x);
    node* curr=head;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        node* a=new node(x);
        curr->next=a;
        curr=curr->next;
    }
    node* res=head->reverseList(head);
    while(res!=nullptr){
        cout<<res->val<<" ";
        res=res->next;
    }
}