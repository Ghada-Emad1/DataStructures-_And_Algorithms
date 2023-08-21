#include<bits/stdc++.h>
using namespace std;
void Print(int arr[],int size){
    stack<int>S;
    S.push(arr[0]);
    for(int i=1;i<size;i++){
        if(S.empty()){
           S.push(arr[i]);
           continue;
        }
        while(!S.empty() && S.top()<arr[i]){
          cout<< S.top()<<"--->"<<arr[i]<<endl;
          S.pop();
        }
        S.push(arr[i]);
       
    }
    while(!S.empty()){
        cout<<S.top()<<"--->"<<-1<<endl;
        S.pop();
        }

}
int main(){
    int arr[]={22,12,23,5,1,4};
    int size=sizeof(arr)/sizeof(int);
    Print(arr,size);
    return 0;
}