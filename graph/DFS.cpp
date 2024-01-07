#include <bits/stdc++.h>
using namespace std;
void DFS(int node, vector<int> adj[], int visited[], vector<int> &Ls)
{
    visited[node] = 1;
    Ls.push_back(node);
    for (auto i : adj[node])
    {
        if (!visited[i])
        {
            DFS(i, adj, visited, Ls);
        }
    }
}
class Solution
{
public:
    vector<int> DFS_Of_Graph(int V, vector<int> adj[])
    {
        int visited[V] = {0};
        int start = 0;
        vector<int> Ls; // To store result of DFS
        DFS(start, adj, visited, Ls);
        return Ls;
    }
};
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printAns(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<int> adj[5];

    addEdge(adj, 0, 2);
    addEdge(adj, 2, 4);
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);

    Solution obj;
    vector<int> ans = obj.DFS_Of_Graph(5, adj);
    printAns(ans);

    return 0;
}

//Time complexity:O(N)+O(2E) 2E--> degree of undirected graph
//Space complexity:O(N)