#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node*next;
};
Node*top=NULL;
void push(int x){
    Node*new_node=new Node();
    new_node->data=x;
    new_node->next=top;
    top=new_node;
}
void pop(){
    if(top==NULL){
        cout<<"stack overflow"<<endl;
    }
    Node*temp=top;
    top=top->next;
    free(temp);
}
void print(){
    if(top==NULL){
        cout<<"stack is empty";
    }
    else{
        Node*ptr=top;
        cout<<"stack is: ";
        while(ptr!=NULL){
            cout<<" "<<ptr->data;
            ptr=ptr->next;
        }
        cout<<endl;
    }
}
int main(){
   push(1);print();
   push(2);print();
   push(3);print();
   pop();print();
   push(4);print();   

}