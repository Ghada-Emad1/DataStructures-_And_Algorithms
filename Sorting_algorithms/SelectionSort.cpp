#include<bits/stdc++.h>
using namespace std;
int SelectionSort(int A[],int size){
    for(int i=0;i<size-1;i++){
        int i_min=i;
        for(int j=i+1;j<size;j++){
            if(A[j]<A[i_min]){
                i_min=j;
            }
        }
        int temp=A[i_min];
        A[i_min]=A[i];
        A[i]=temp;
    }
}
int main(){
    cout<<"Enter the numbers of elements ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    cout<<"The sorted list is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// selection sort in-place sorting algorithm 
/*selection sort is a sorting algorithm that select the smallest element from 
an unsorted list in each iteration and place that element at the begining of 
unsorted list
*/

//time complexity : O(N^2)  , space complexity :O(1)