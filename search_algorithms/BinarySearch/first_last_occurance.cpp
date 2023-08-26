#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int*A,int n,int x,bool searchfirst){
    int low=0;
    int high=n-1;
    int res=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(x==A[mid]){
            res=mid;
            if(searchfirst){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        else if(x<A[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return res;
}
int main(){
    int arr[] = { 2,2,2,4,10,10,10,10,12,12,20 };
    int x;
    cout<<"Enter the number : ";
    cin>>x;
    int n = sizeof(arr) / sizeof(int);
    int firstindex=BinarySearch(arr,n,x,true);
    if(firstindex==-1){
        cout<<"Count of  "<<x <<" is 0";
    }else{
        int lastindex=BinarySearch(arr,n,x,false);
        cout<<"Count of "<<x << " is "<<lastindex-firstindex+1;
    }
 
}