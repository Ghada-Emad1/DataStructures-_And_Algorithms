#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=1025;
    int *p;
    p=&a;
    cout<<sizeof(int)<<endl;
    cout<<p<<endl; // the address of a / the address is 0x61ff08
    cout<<p+1<<"----->"<<endl; //that will add four byte above the previous address 0x61ff0c=0x61ff08+4
    //what if it is like p+2 --> so we will add 2byte in type of intger
    cout<<p+2<<"--->"<<endl; //0x61ff08+(2 byte interger) 8 =0x61ff10
    cout<<*(p+1)<<endl; // the value of p+1 in memory
    cout<<*p<<endl; //the value of a
    cout<<"__________________________________"<<endl;
    char *ptr;
    ptr=(char*)p; //typecasting: the process in which the compiler automatically converts one data type in a program to another one
    cout<<"the size of char is "<<sizeof(char)<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
}