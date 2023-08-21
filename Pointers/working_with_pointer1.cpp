#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
int main(){
    int a;
    a=90;
    int *ptr;//intialize pointer / pointer to integer
    ptr=&a; //point to the address of a
    cout<<a<<endl; //90
    cout<<"the address of a is :"<<ptr<<endl; //the address of a
    cout<<"the value of the address of a :"<<*ptr<<endl;
    if(*ptr==a)
    {
        cout<<"value of a is equal to *ptr"<<endl;
    }else{
        cout<<"value of a is not equal to *ptr"<<endl;
    }
    if(ptr==&a)
    {
        cout<<"the address of a is equal to ptr"<<endl;
    }else{
        cout<<"the value of a is not equal to ptr"<<endl;
    }
    //ptr ==&a
    //*ptr==a
    return 0;
}