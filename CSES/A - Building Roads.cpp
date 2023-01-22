#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  nl                    "\n";

vector<int> ar[200005];
int vis[200005];

void dfs(int node)
{
        vis[node] = 1;
        for(auto child : ar[node])
        {
            if(!vis[child]) dfs(child);
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
                ar[b].push_back(a);
    }

    int cc = 0;
    vector<int>ans;

    for(int i = 1 ; i<= n ; i++)
    {
        if(!vis[i])
        {
                ans.push_back(i);
                dfs(i);

                cc++;
        }
    }

    cout<<cc-1<<nl;
    cout<<ans.front()<<" ";

    for(int i = 1 ; i < ans.size()- 1 ; i++)
    {
                cout<<ans[i]<<"\n";
                cout<<ans[i]<<" ";
    }

    cout<<ans.back()<<nl;
    cout<<nl;

    return 0;
}
