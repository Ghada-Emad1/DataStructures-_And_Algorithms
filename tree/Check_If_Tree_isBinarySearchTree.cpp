#include<bits/stdc++.h>
using namespace std;
struct Node
{
	char data;
	Node* left;
	Node* right;
};
Node* Insert(Node* root, char data)
{
	if (root == NULL)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if (data <= root->data) { root->left = Insert(root->left, data); }
	else { root->right = Insert(root->right, data); }
	return root;
}
bool IsBstUtil(Node* root, int minvalue, int maxvalue)
{
	if (root == NULL)
	{
		return true;
	}
	if((root->data > minvalue && root->data < maxvalue) && IsBstUtil(root->left, minvalue, root->data)
		&& IsBstUtil(root->right, root->data, maxvalue))
		return true;
	else
		return false;
}
bool IsBinarySearchTree(Node* root)
{
	return IsBstUtil(root,INT_MIN,INT_MAX);
}
int main()
{
	Node* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	cout << "is binary tree is bst Or not ? " << IsBinarySearchTree(root);
}
