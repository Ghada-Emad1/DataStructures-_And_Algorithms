#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node*Next;
};
Node*head;
void insert(Node**head,int data){
    Node*temp=new Node();
    temp->data=data;
    temp->Next=NULL;
    if(*head==NULL){
        *head=temp;
        return;
    }
    else{
        Node*temp1=*head;
        while(temp1->Next!=NULL){
            temp1=temp1->Next;
            
        }
        temp1->Next=temp;
        return ;
    }
}
Node* Reverse(Node*head){
    Node*current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->Next;
        current->Next=prev;
        prev=current;
        current=next;
    }
    head=prev;
    return head ;
}
void print(Node*list){
    cout<<"list is ";
    while(list!=NULL){
        cout<<" "<<list->data;
        list=list->Next;
    }
    cout<<endl;
}
//using recursion
void ReverseRec(Node*p){
    if(p->Next==NULL)
    {
        head=NULL;
        return;
    }
    ReverseRec(p->Next);
    Node*q=p->Next;
    q->Next=p;
    p->Next=NULL;
}
int main (){
   head=NULL;
   insert(&head,1);
   insert(&head,2);
   insert(&head,4);
   insert(&head,6);
   print(head);
   head=Reverse(head); //we make it like that because we want to return a node
   print(head);

}