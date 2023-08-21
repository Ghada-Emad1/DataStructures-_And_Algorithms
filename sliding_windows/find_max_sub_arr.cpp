//find the max sum subarray of a fixed size k
//[4,2,1,7,8,1,2,8,1,0]
#include<bits/stdc++.h>
using namespace std;
int findMaxSumSubArray(vector<int>&arr,int k){
    int maxvalue=INT_MIN ;
    int currentrunningSum=0;
    for(int i=0;i<arr.size();i++){
        currentrunningSum+=arr[i];
        if(i>=k-1){
            maxvalue=max(maxvalue,currentrunningSum);
            currentrunningSum-=arr[i-(k-1)];
            //remove the element in the first and go with the next three elements
        }
    }
    return maxvalue;
}
int main(){
   vector<int>arr={4,2,1,7,8,1,2,8,1,0};
   cout<<findMaxSumSubArray(arr,3);
}