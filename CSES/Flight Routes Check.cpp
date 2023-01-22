#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  nl                    "\n";

vector<int> ar[200005],tra[200005],order;
int vis[200005];

void dfs(int node)
{
        vis[node] = 1;
        for(auto child : ar[node])
        {
            if(!vis[child]) dfs(child);
        }
        order.push_back(node);
}

void dfs1(int node)
{
        vis[node] = 1;
        for(auto child : tra[node])
        {
                if(vis[child] == 0)
                {
                    dfs1(child);
                }
        }
}

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i = 1 ; i <= m ; i++)
    {
            int a,b;
            cin>>a>>b;
            ar[a].push_back(b);
            tra[b].push_back(a);
    }

    int cc = 0;
    vector<int>ans;

    for(int i = 1 ; i<= n ; i++)
    {
            if(!vis[i])
            {
                dfs(i);
            }
    }

    for(int i = 1 ; i <= n ; i++ ) vis[i]=0;

    for(int i = 1 ; i<= n ; i++)
    {
            if(vis[order[n-i]] == 0)
            {
                ans.push_back(order[n-i]);
                dfs1(order[n-i]);
            }
    }


    if(ans.size()==1)
    {
            cout<<"YES\n";
            return 0;
    }

    cout<<"NO\n";
    cout<<ans.back()<<" "<<ans.front()<<nl;

    return 0;
}
