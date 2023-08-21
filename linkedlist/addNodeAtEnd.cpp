#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* Next;
};
void append(Node**head,int new_data){
    Node* New_Node=new Node();
    New_Node->data=new_data;
    New_Node->Next=NULL;
    //if list is empty
    if(*head==NULL)
    {
        *head=New_Node;
        return;
    }
    //you are assigning 'temp' to 'head' pointer,so that you will not lose your address and you can again use 'temp' for creating memory for new structure
    Node* temp=*head;
    while(temp->Next !=NULL){
        temp=temp->Next;
    }
    //temp here point to the last list before append the next one 
    temp->Next=New_Node;
    return;
}
void print(Node* list){
    cout<<"list is";
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
    cout<<"Enter the Number of Element"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        append(&head,x);
        print(head);
    }

}