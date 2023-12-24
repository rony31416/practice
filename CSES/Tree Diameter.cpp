//https://cses.fi/problemset/task/1131
#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  nl                    "\n";

vector<int> ar[200005];
queue<int> q;
int vis[200005];
int dia[200005];

int bfs(int node,int n)
{
    q.push(node);
    for(int i = 0 ; i <= n ; i++)
    {
        vis[i] = dia[i] = 0;
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
int main()
{

    int n,m;
    cin>>n;
    for(int i = 0 ; i <= n ; ++i)
        vis[i] = 1;
    for(int i = 1 ; i <= n-1 ; i++)
    {
        int a,b;
        cin>>a>>b;
        ar[a].push_back(b);
        ar[b].push_back(a);
    }


    for(int i = 0 ; i <= n ; i++)
    {
        vis[i] = dia[i] = 0;
    }

    int a = bfs(1,n);

    int b = bfs(a,n);


    cout<<dia[b]<<nl;


    return 0;
}
