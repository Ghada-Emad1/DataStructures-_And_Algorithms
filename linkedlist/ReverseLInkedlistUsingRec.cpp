#include <iostream>
#include<string>
using namespace std;
class Node
{
public:
	int data;
	 Node* Next;
};
Node* head;
void Reverse(Node*p){
    if(p->Next==NULL){
        head=p;
        return;
    }
    Reverse(p->Next);
    Node*q=p->Next;
    q->Next=p;
    p->Next=NULL;
}
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
void Print(Node* list) {
    cout<<"list is";
	while (list != NULL) {
		cout << " " << list->data;
		list = list->Next;
	}
	cout << "\n";
}
int main() {
	head = NULL; 
	insert(&head, 2);
	insert(&head, 4);
	insert(&head, 6);
	insert(&head, 8);
	Print(head);
	Reverse(head);
	Print(head);
}