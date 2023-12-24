//https://cses.fi/problemset/task/1707
#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  nl                    "\n";

vector<int> ar[2505];
queue<int> q;
int vis[2505];
int dis[5005];
int par[2505];
const int INF = 1e9;
int n,m;
int ans = INF;

void s_cycle(int node)
{
    for(int i = 0 ; i <= n; i++)
    {
        dis[i] = INF;
        par[i] = -1;
    }
    dis[node] = 0;

    q.push(node);
    // q.push(node);
    // vis[node] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto child : ar[u])
        {
            if(dis[child] == INF)
            {
                dis[child] = 1+dis[u];
                par[child] = u;
                q.push(child);
            }
            else if(par[u] != child and par[child] != u)
                ans = min(ans,dis[u]+dis[child]+1);
        }
    }

}

/*
int bfs(int node,int n)
{

    for(int i = 0 ; i <= n ; i++)
    {
        vis[i] = dis[i] = 0;
    }
    q.push(node);
    vis[node] = 1;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(auto child : ar[u])
        {
            if(vis[child] == 0)
            {
                vis[child] = 1;
                dia[child] = dia[u]+1;
                q.push(child);
            }
        }
    }

    return int(max_element(dia+1,dia+n+1) - dia);


}

*/
int main()
{

    //int n,m;
    cin>>n>>m;
    for(int i = 1 ; i <= m ; i++)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }


    for(int i = 0 ; i <= n ; i++)
    {
        vis[i] = dis[i] = 0;
    }

    for(int i = 1; i <= n ; i++)
    {
      s_cycle(i);
    }
    if(ans == INF) {
    cout<<-1<<nl;
    }
    else cout<<ans<<nl;

    return 0;
}
