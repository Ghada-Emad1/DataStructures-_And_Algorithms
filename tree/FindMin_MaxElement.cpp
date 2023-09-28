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
    BstNode *NewNode = new BstNode();
    NewNode->data = data;
    NewNode->left = NULL;
    NewNode->right = NULL;
    return NewNode;
}
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
        root = GetNewNode(data);
    else if (root->data >= data)
    {
        root->left = Insert(root->left, data);
    }
    else
        root->right = Insert(root->right, data);
    return root;
}
int FindMin(BstNode *root)
{
    if (root == NULL)
        return -1;
    // while (root->left != NULL)
    //     root = root->left;
    if(root->left==NULL) return root->data;
    FindMin(root->left);
}
int FindMax(BstNode *root)
{
    if (root == NULL)
        return -1;
    // while (root->right != NULL)
    //     root = root->right;
    if(root->right==NULL) return root->data;
    FindMax(root->right);
}
int main()
{
//        12
//       /   \
//     10     20
//    /      /  
//   5     15
    BstNode*root=NULL;
    root=Insert(root,12);
    root=Insert(root,20);
    root=Insert(root,15);
    root=Insert(root,10);
    root=Insert(root,5);

    cout<<"The Maximum Number in the tree is: "<<FindMax(root)<<endl;
    cout<<"The Minmum Number in the tree is :"<<FindMin(root);
}