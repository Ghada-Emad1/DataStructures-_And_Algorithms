#include <bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode *left;
    BstNode *right;
};
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = new BstNode();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
    {
        root->left = Insert(root->left, data);
    }
    else
    {
        root->right = Insert(root->right, data);
    }
    return root;
}
BstNode *FindMin(BstNode *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
BstNode *Delete(BstNode *root, int data)
{
    if (root == NULL)
        return root;
    else if (data < root->data)
        root->left = Delete(root->left, data);
    else if (data > root->data)
        root->right = Delete(root->right, data);
    // Wohoo... I found you, Get ready to be deleted
    else
    {
        // Case 1:  No child
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // Case 2: One child
        else if (root->left == NULL)
        {
            BstNode *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            BstNode *temp = root;
            root = root->left;
            delete temp;
        }
        // case 3: 2 children
        else
        {
            //find minmum in right-subtree 
            BstNode *temp = FindMin(root->right);
            //copy the value in targetted node
            root->data = temp->data;
            //delete dublicate from right-subtree
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}
void Inorder(BstNode *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
int main()
{
    /*Code To Test the logic
      Creating an example tree
                5
               / \
              3   10
             / \   \
            1   4   11
    */
    BstNode *root = NULL;
    root = Insert(root, 5);
    root = Insert(root, 10);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 1);
    root = Insert(root, 11);
    root = Delete(root, 1);
    cout << "Inorder: ";
    Inorder(root);
    cout << endl;
}