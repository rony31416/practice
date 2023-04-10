#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100];
int vis[100];
int pre[100];
int low[100];
int d[100];

void dfs(int  node)
{
    vis[node] = 1;
    cout<<node<<" ";
    for(auto child : adj[node])
    {
        if(!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int n;
    cin>>n;
    for(int i = 1 ; i<= n ; i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(0);
    return 0;
}


