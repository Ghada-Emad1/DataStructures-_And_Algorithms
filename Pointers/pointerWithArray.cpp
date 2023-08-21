#include<bits/stdc++.h>
using namespace std;
int sum(int* A,int size){
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=A[i];
    }
    return sum;
}
int main(){
    int A[]={1,2,3,4,5};
    int *p;
    p=A; 
    //to reach to address - we can write &A[i] or (A+i)
    //to reach to the value - we can write A[i] or *(A+i)
    cout<<A<<" "<<&A[0]<<endl; //return the address of the first element
    cout<<*A<<" "<<A[0]<<endl; //return value of the first element
    for(int i=0;i<5;i++){
        cout<<&A[i]<<" ";//the address of elements
        cout<<(A+i)<<" ";//the address of elements
        cout<<A[i]<<" ";
        cout<<*(A+i)<<" ";
    }
    cout<<endl;
    int *ptr=A;
    cout<<++ptr<<endl;
    //cout<<++A<<endl; (syntax error)

    //Arrays as function arguments
    int Arr[]={1,2,3,4,5};
    int total=sum(Arr,5);
    cout<<"sum of Elements is "<<total<<endl;
}