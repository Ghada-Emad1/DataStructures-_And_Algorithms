#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int hash[1001]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<hash[num]<<" "<<endl;
    }
}