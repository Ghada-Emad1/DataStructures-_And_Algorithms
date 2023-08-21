#include<bits/stdc++.h>
using namespace std;
class Node{
 public:
    int data;
    Node* Next;
};
void insert(Node**head,int data)
{
    Node* new_node=new Node();
    new_node->data=data;
    new_node->Next=*head;
    *head=new_node;

}
void print(Node*list){
    cout<<"list is :";
    while(list!=NULL)
    {
        cout<<" "<<list->data;
        list=list->Next;
    }
    cout<<endl;
}
int main(){
    Node*head=NULL;
    int n;
    cout<<"Enter the number of element you want to insert"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cout<<"Enter element"<<endl;
        cin>>x;
        insert(&head,x);
        print(head);
    }
}