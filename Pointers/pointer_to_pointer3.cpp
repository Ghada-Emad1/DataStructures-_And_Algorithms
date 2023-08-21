#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=5;//pointer to interger
    int *p=&x;
    *p=6; //modify the value of x
    cout<<x<<endl; //6
    cout<<p<<endl;
    int **ptr=&p; //pointer to pointer to integer
    cout<<*ptr<<endl;
    cout<<**ptr<<endl;
    cout<<ptr<<endl;
    int ***R=&ptr; //point to ptr
    cout<<*R<<endl; //the same address of ptr
    cout<<**R<<endl; //pointer to pointer of ptr (p)
    cout<<***R<<endl; //value of p
    ***R=23; //modify the address of x 
    cout<<x<<endl; 
    cout<<**ptr<<endl;
    cout<<(**ptr)+2<<endl;
    int ****O=&R;
    cout<<*O<<endl; //point to R
    cout<<**O<<endl; //point to Ptr
    cout<<***O<<endl; //point to p
    cout<<****O<<endl; //point to value of x
}