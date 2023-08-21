#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int Arr[],int start,int end,int x){
    if(start>end) return -1;
    int mid = start +(end - start)/2;
    if(x==Arr[mid]) return mid;
    else if(x<Arr[mid]){
        return BinarySearch(Arr,start,mid-1,x);
    }
    else{
        return BinarySearch(Arr,mid+1,end,x);
    }
}
int main(){
    int A[]={2,4,5,7,9,15,17,20};
   cout<<"Enter a Number : ";
   int x;
   cin>>x;
   int index=BinarySearch(A,0,7,x);
   if(index!=-1) cout<<"Number "<<x<<" is at index "<<index;
   else cout<<"Number "<<x <<" is Not Found"<<endl;

}