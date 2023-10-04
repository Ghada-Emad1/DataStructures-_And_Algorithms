#include <bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};

bool IsBsTree(BstNode *root, int MinValue, int MaxValue)
{
    if (root == NULL)
        return true;
    if ((root->data > MinValue && root->data < MaxValue) && (IsBsTree(root->left, MinValue, root->data)) && IsBsTree(root->right, root->data, MaxValue)){
        return true;
    }
    else return false;
}
int main()
{
    
    cout<<"Is Tree Is Binary Search Tree "<<IsBsTree(root,INT_MIN,INT_MAX);
}