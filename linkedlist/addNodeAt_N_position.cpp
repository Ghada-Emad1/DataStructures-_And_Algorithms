#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* Next;
};
Node*head;
void Insert_N_position(int New_data,int n)
{
    Node*temp1=new Node();
    temp1->data=New_data;
    temp1->Next=NULL;
    if(n==1)
    {
        temp1->Next=head;
        head=temp1;
        return;
    }
    Node*temp2=head;
    for(int i=0;i<n-2;i++){
        temp2=temp2->Next;
    }
    temp1->Next=temp2->Next;
    temp2->Next=temp1;
}
void print(Node* list){
    cout<<"list is: ";
   while(list!=NULL)
   {
    cout<<" "<<list->data;
    list=list->Next;
   }
   cout<<endl;
}
int main(){
    head=NULL;
    cout<<"How many Numbers you want to insert :";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      cout<<"enter the number"<<endl;
      int data,pos;
      cin>>data;
      cout<<"enter position"<<endl;
      cin>>pos;
      Insert_N_position(data,pos);
      print(head);
    }

}