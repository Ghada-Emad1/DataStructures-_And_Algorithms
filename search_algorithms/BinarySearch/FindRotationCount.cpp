#include<bits/stdc++.h>
using namespace std;
int FindRotationCount(int A[],int n){
    int low=0;
    int high=n-1;
    while(low<=high){
        if(A[low]<=A[high]) return low;
        int mid=low+(high-low)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
        if(A[mid]<=A[next] && A[mid]<=A[prev]){
            return mid;
        }
        else if(A[mid]<=A[high]) high=mid-1;
        else if(A[mid]>=A[low]) low=mid+1;
    }
}
int main(){
  int mid=4,n=9;
  int next=(mid+1)%n;
  int prev=(mid+n-1)%n;
  cout<<next<< " "<<prev<<endl;
  int A[]={11,12,13,14,17,2,3,4,5,6};
  int count=FindRotationCount(A,9);
  cout<<"the arry is rotated "<<count<<" times";
}