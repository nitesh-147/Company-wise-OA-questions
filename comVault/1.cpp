#include <bits/stdc++.h>
using namespace std;

void bfs(int node, vector<int> adj[], vector<int> &clusterSize, vector<int> &vis)
{
    queue<int> q;
    q.push(node);
    vector<int> temp;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        temp.push_back(x);
        for (auto i : adj[x])
        {
            if (!vis[i])
            {
                vis[i] = 1;
                q.push(i);
            }
        }
    }

    for (auto i : temp)
    {
        clusterSize[i] = temp.size();
    }
}

int main()
{
    int n;
    cin >> n;
    int e;
    cin >> e;
    vector<int> adj[n];
    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> clusterSize(n);
    vector<int> vis(n, 0);
    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            bfs(i, adj, clusterSize, vis);
        }
    }
    int ans=0;
    for(auto i:clusterSize){
        ans+=(n-i);
    }
    cout<<ans/2<<endl;
    return 0;
}