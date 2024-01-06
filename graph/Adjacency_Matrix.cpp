#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int adjMatr[nodes + 1][nodes + 1];
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        adjMatr[u][v] = 1;
        adjMatr[v][u] = 1; // remove it if it is directed graph
    }
    return 0;
}
//time complexity:O(N) , space complexity:O(N^2)
