#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int Arr[],int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        //int mid=(start+end)/2; may overflow
        int mid=start+(end-start)/2; //this is better  
        if(Arr[mid]==x) return mid;
        if(Arr[mid]>x) end=mid-1;
        else start=mid+1;
    }
    return -1;
}
int main(){
   int A[]={2,4,5,7,9,15,17,20};
   cout<<"Enter a Number : ";
   int x;
   cin>>x;
   int index=BinarySearch(A,8,x);
   if(index!=-1) cout<<"Number "<<x<<" is at index "<<index;
   else cout<<"Number "<<x <<" is Not Found"<<endl;
}