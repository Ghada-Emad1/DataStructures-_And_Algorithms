#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<int>adjList[nodes+1];

    for(int i=0;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u); //for directed graph , remove this line
    }
    return 0;
}
//for directed graph: space complexity:O(E)
//for undirected graph:space complexity:O(2 E)