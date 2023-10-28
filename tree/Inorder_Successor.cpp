#include <bits/stdc++.h>
using namespace std;
struct BstNode
{
    BstNode *left;
    BstNode *right;
    int data;
};
// function to find node that we search for its successor
BstNode *Find(BstNode *root, int data)
{
    if (root == NULL)
        return NULL;
    else if (root->data == data)
        return root;
    else if (root->data < data)
        return Find(root->right, data);
    else
        return Find(root->left, data);
}
// Function to insert Node in BST
BstNode *Insert(BstNode *root, int data)
{
    if (root == NULL)
    {
        root = new BstNode();
        root->data = data;
        root->left = root->right = NULL;
    }
    else if (data <= root->data)
        root->left = Insert(root->left, data);
    else
        root->right = Insert(root->right, data);

    return root;
}
// function to find Node with minimum value in a BST
BstNode *FindMin(BstNode *root)
{
    if (root == NULL)
        return NULL;
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// function to visit Node in Inorder
void Inorder(BstNode *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
// Function to Find Inorder successor in BST
BstNode *GetSuccessor(BstNode *root, int data)
{
    // Search for The Node O(h)
    BstNode *current = Find(root, data);
    if (current == NULL)
        return NULL;
    // Case 1 : Node has Right SubTree O(h)
    if (current->right != NULL)
    {
        return FindMin(current->right);
    }
    else
    {
        // Case2: No right SubTree O(h)
        BstNode *successor = NULL;
        BstNode *ansessor = root;
        while (current != ansessor)
        {
            if (current->data < ansessor->data)
            {
                successor = ansessor;
                ansessor = ansessor->left;
            }
            else
                ansessor = ansessor->right;
        }
        return successor;
    }
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

    cout << "Inorder Traversal: ";
    Inorder(root);
    cout << '\n';

    // Find Inorder Successor of some Node
    BstNode *successor = GetSuccessor(root, 3);
    if (successor == NULL)
    {
        cout << "No Successor Found!!" << '\n';
    }
    else
        cout << "Successor is " << successor->data << '\n';
}