#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;

    node(int x){val=x;left=right=nullptr;}
};
static int index=-1;
node* buildTree(vector<int> preorder){
    index++;
    if(preorder[index]==-1){return nullptr;}
    node* root=new node(preorder[index]);
    root->left=buildTree(preorder);
    root->right=buildTree(preorder);
    return root;
}
void preOrder(node* root){
    if(root==nullptr){return;}
    cout<<root->val<<" ";
    preOrder(root->left);
    preOrder(root->right);
}
void inOrder(node* root){
    if(root==nullptr){return;}
    inOrder(root->left);
    cout<<root->val<<" ";
    inOrder(root->right);
}
void postOrder(node* root){
    if(root==nullptr){return;}
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->val<<" ";
}
bool BSTvalidation(node* root, node* min, node* max){
    if(root==nullptr){return true;}
    if(min!=nullptr && root->val <= min->val){return false;}
    if(max!=nullptr && root->val >= max->val){return false;}
    return BSTvalidation(root->left,min,root) && BSTvalidation(root->right,root,max);
}
int main(){
    vector<int> preorder= {3,2,1,-1,-1,-1,5,4,-1,-1,6,-1,-1};
    node* root=buildTree(preorder);
    preOrder(root);
    cout<<endl;
    inOrder(root);
    cout<<endl;
    postOrder(root);
    bool res=BSTvalidation(root,nullptr,nullptr);
    cout<<endl<<res;
}