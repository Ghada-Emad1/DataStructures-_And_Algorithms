#include<bits/stdc++.h>
using namespace std;
void Print(int arr[],int size){
    int i,j,next;
    for(i=0;i<size;i++){
        next=-1;
        for(j=i+1;j<size;j++){
           if(arr[i]<arr[j]){
              next=arr[j];
              break;
           }
        }
        cout<<arr[i]<<"--->"<<next<<endl;
    }
}
int main(){
   int arr[]={11,13,21,5};
   int size=sizeof(arr)/sizeof(int);
   Print(arr,size);
   return 0;
}
//Time complexity:O(N^2)