#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* Next;
};
Node* head;
void Insert(int data){
   Node*temp1=new Node;
   temp1->data=data;
   temp1->Next=head;
   head=temp1;
}
void Delete(int n) { //Delete node at position n
    Node* temp1 = head;
    if(n == 1) {
        head = temp1->Next; //head now points to second node
        delete temp1;
        return;
    }
    for(int i = 0; i < n - 2; i++){
        temp1 = temp1->Next;
        } //temp1 points to (n - 1)th Node
    Node* temp2 = temp1->Next; //nth Node
    temp1->Next = temp2->Next; // (n + 1)th Node
    delete temp2;
}
void print(Node*list){
    cout<<"the list is";
    while(list!=NULL){
        cout<<" "<<list->data;
        list=list->Next;
    }
    cout<<endl;
}
int main(){
    head=NULL;
    head = NULL; //Empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); //List: 2,4,6,5
    print(head);
    int n;
    cout << "Enter a position" << endl;
    cin >> n;
    Delete(n);
    print(head);
}