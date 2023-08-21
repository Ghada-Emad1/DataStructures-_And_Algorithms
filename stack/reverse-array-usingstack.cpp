#include<bits/stdc++.h>
#include<cstring>
using namespace std;
void reverse(char*c,int n){
    stack<char>S;
    for(int i=0;i<n;i++){
        S.push(c[i]);
    }
    for(int i=0;i<n;i++){
        c[i]=S.top();
        S.pop();
    }
}
int main(){
    char str[]="Hello";
    reverse(str,strlen(str));
    cout<<"output ="<<str<<endl;
    return 0;
}