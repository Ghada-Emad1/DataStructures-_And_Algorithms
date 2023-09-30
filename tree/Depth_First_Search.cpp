#include <bits/stdc++.h>
using namespace std;
struct Node
{
    char data;
    Node *left;
    Node *right;
};
Node *GetNewNode(char data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// Function to Insert Node in a Binary Search Tree
Node *Insert(Node *root, char data)
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
void PreOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}
void Inorder(Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void PostOrder(Node *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}
int main()
{
    /*Code To Test the logic
  Creating an example tree
            M
           / \
          B   Q
         / \   \
        A   C   Z
*/
    Node *root = NULL;
    root = Insert(root, 'M');
    root = Insert(root, 'B');
    root = Insert(root, 'Q');
    root = Insert(root, 'Z');
    root = Insert(root, 'A');
    root = Insert(root, 'C');
    // Print Nodes in Preorder.
    cout << "Preorder: ";
    PreOrder(root);
    cout << "\n";
    // Print Nodes in Inorder
    cout << "Inorder: ";
    Inorder(root);
    cout << "\n";
    // Print Nodes in Postorder
    cout << "Postorder: ";
    PostOrder(root);
    cout << "\n";
}