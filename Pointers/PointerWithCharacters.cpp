#include<bits/stdc++.h>
using namespace std;
void print(char* c){
    while(*c!=NULL){
        cout<<*c;
        c++;
    }
    cout<<endl;
}
int main(){
    char c[4];
    c[0]='j';c[1]='o';c[2]='h',c[3]='n';
    cout<<c<<endl; //john≡↓@
    //rule : string in c/c++ has to be terminated by null character
    c[4]=NULL;
    cout<<c<<endl;
    char b[5]="john";
    cout<<"size in bytes ="<<sizeof(b)<<endl; //it will be 5 because i am the one who put the size of b =5
    int len=strlen(b);
    cout<<len<<endl;//4 because he already has 4 length

    char c1[6]="Hello";
    //size of arr must be greater than or equal to no. character in string +1
    char* c2;
    c2=c1; //c2 point to the first char in c1
    cout<<c2<<endl; //Hello
    c2[0]='N';
    cout<<c1<<endl; //Nello
    c1[3]='A';
    cout<<c2<<endl;
    //when we pass arrays to functions , we only pass the address of the array in a pointer variables
    //and we don't pass a whole copy of the array

    char c3[20]="New World";
    print(c3);

    //--------------------

    //char B[20]="Hello"; //string gets stored in the space for array
    char* B="Hello"; //string gets stored as compile time constant
    B[0]='N'; //you can't modify constant pointer 
    cout<<B<<endl;
}