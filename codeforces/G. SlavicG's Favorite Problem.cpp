#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
vector<pair<int,int>> G[N];
map<int,bool> m;
bool visit[N],ok;
int n,a,b;

void dfs(int node,int par,int x)
{
    if(node == b) return ;
    m[x] = true;
    visit[node] = true;
    for(auto u : G[node])
    {
        if(u.first != par)
        dfs(u.first,node,x^u.second);

    }

}
void dfs_again(int node,int par,int x)
{
    visit[node] = true;
    if(m[x] and node != b)
    {
        ok = true;
    }
    for(auto u : G[node])
    {
        if(u.first != par)
        {
            dfs_again(u.first,node,x^u.second);
        }

    }

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        cin>>n>>a>>b;
        for(int i = 0 ; i<  N ; i++)
        {
            G[i].clear();
            visit[i] = false;
        }
        m.clear();
        ok = false;
        for(int i = 1 ; i <= n-1 ; i++)
        {
            int u,v,w;
            cin>>u>>v>>w;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }

        dfs(a,-1,0);
        dfs_again(b,-1,0);
        if(ok)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }

    }


    return 0;

}
 
