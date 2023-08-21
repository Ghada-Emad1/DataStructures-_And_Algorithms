//find the smallent size of sum array which is greater or equal to tartet
//[4,2,1,7,8,1,2,8,1,0]
#include<bits/stdc++.h>
using namespace std;
int SmallestSubarray(int target,vector<int>&arr){
    int minWindowSize=INT_MAX;
    int currentWindowSum=0;
    int windowStart=0;
    for(int windowEnd=0;windowEnd<=arr.size();windowEnd++){
        currentWindowSum+=arr[windowEnd];
        while(currentWindowSum>=target){
            minWindowSize=min(minWindowSize,windowEnd-windowStart+1);
            currentWindowSum-=arr[windowStart];
            windowStart++;
        }
    }
    return minWindowSize;
}
int main(){
    vector<int>arr={4,2,2,7,8,1,2,8,10};
    int target=8;
    cout<<SmallestSubarray(target,arr);

}