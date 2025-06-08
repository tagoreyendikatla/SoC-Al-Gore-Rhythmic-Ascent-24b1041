#include<bits/stdc++.h>
using namespace std;
// A class node is defined, it is considered a small unit of a chain of linked list.
class node{
    public:
    int data;
    node* next;
    node(int value){data=value;next=nullptr;}
    
    //insert function is defined for inserting a new unit in the chain.
    void insert(int value){
        node* temp=this->next;
        node* a= new node(value);
        this->next=a;
        a->next=temp;
    }
    //delete function is to remove a unit in a chain, here 'this' stands for the unit which is 
    //before the unit which should be deleted.
    void Delete(){
        if(this->next==nullptr){return;}
        node* temp1=this->next;
        node* temp2=temp1->next;
        this->next=temp2;
        delete temp1;
    }
    //here we can implement this function from head, it mean consider head as object, then it travels and 
    //return true if it exist or false if not, or you can make any unit as object, but best is to take head as object.
    void search(int value){
        node*curr=this;
        if(curr->data==value){cout<<"true";return;}
        cout<<"false";
        return;
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
        curr=a;
    }
    node* temp=head;
    head->insert(99);
    head->next->next->insert(98);
    head->Delete();
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    head->search(6);
}