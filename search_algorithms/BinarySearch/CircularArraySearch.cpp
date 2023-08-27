#include<bits/stdc++.h>
using namespace std;
int CircularArraySearch(int A[],int n,int x){
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(A[mid]==x) return mid;
        if(A[low]<=A[mid]){
            if(A[low]<=x && x<=A[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else{
            if(A[mid]<x && x<=A[high]){
                low=mid+1;
            }else{
                high=mid-1;
            }
        }

        
    }
    return -1;
}
int main(){
    int A[]={12,14,18,21,3,6,8,9};
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int index=CircularArraySearch(A,8,x);
    if(index==-1){
        cout<<"Not found in Array";
    }else{
        cout<<x <<" is was found at index "<<index;
    }
}