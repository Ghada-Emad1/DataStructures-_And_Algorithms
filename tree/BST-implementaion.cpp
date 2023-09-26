#include <bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode *GetNewNode(int data)
{
    BstNode *newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// insert data in Bst
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
        root->right = Insert(root->right, data);
    return root;
}
bool Search(BstNode *root, int data)
{
    if (root == NULL)
        return false;
    else if (root->data == data)
        return true;
    else if (root->data >= data)
        return Search(root->left, data);
    else
        return Search(root->right, data);
}
int main()
{
    BstNode *root = NULL;
    root=Insert(root,12);
    root=Insert(root,10);
    root=Insert(root,20);
    root=Insert(root,3);
    root=Insert(root,25);
    cout<<"Enter Number you want to search : ";
    int number;
    cin>>number;
    if(Search(root,number)){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }

}