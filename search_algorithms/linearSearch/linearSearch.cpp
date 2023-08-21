#include<bits/stdc++.h>
using namespace std;
int LinearSearc(int Arr[],int n,int x){
    for(int i=0;i<n-1;i++){
        if(Arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int A[]={2,3,5,7,13,14,19,21};
    int x;
    cout<<"Enter a Number : ";
    cin>>x;
    int index=LinearSearc(A,8,x);
    if(index!=-1)cout<<"Number "<<x<<" is at Index "<<index;
    else cout<<"Number "<<x<<" Not Found "<<endl;
}
//Time Complexity: O(N)