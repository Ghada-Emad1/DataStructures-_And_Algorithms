#include<bits/stdc++.h>
#define Max_size 101
using namespace std;
int top=-1;
int A[Max_size];
void push(int x){
    if(top==Max_size-1){
        cout<<"Error Stack overflow"<<endl;
        return;
    }
    ++top;
    A[top]=x;
}
void pop(){
    if(top==-1){
        cout<<"Error : Stack Overflow"<<endl;
        return;
    }
    top--;
    
}
int Top(){
    return A[top];
}
int IsEmpty(){
    if(top == -1)return true;
    return false;
}
void print(){
    int i;
    cout<<"stack is: ";
    for(int i=0;i<=top;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int main(){
   push(34);print();
   push(78);print();
   push(7);print();
   pop();print();
   push(12);print();
   push(1);print();
   Top();print();
   cout<<IsEmpty()<<endl;
}