#include<bits/stdc++.h>
using namespace std;
struct BstNode{
    int data;
    BstNode*left;
    BstNode*right;
};
BstNode*GetNewNode(int data){
    BstNode*NewNode=new BstNode();
    NewNode->data=data;
    NewNode->left=NewNode->right=NULL;
    return NewNode;
}
BstNode*Insert(BstNode*root,int data){
    if(root==NULL) root=GetNewNode(data);
    else if(root->data>=data) root->left=Insert(root->left,data);
    else root->right=Insert(root->right,data);
    return root;
}
int FindHeight(BstNode*root){
    if(root==NULL) return -1;
    else return max(FindHeight(root->left),FindHeight(root->right))+1;
}
int main(){
   BstNode*root=NULL;
    root=Insert(root,12);
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,5);
    root=Insert(root,30);
    root=Insert(root,35);
   cout<<FindHeight(root);
}