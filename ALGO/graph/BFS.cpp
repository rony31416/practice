#include<bits/stdc++.h>
using namespace std;
const int INF = 1e9+7;
int vis[100];
vector<int> v[100];
vector<int> d(10),p(10);
int source;
void BFS(int s,int n)
{
    for(int  i = 0 ; i< n ;i++)
        vis[i] = 0;
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    p[s] = -1;
    while(!q.empty())
    {
        int u = q.front();
        cout<<u<<" ";
        q.pop();
        for(auto c : v[u]){
            if(vis[c] == 0)
            {
                int x = c;
                vis[c] = 1;
                q.push(c);
                d[c] = d[u] + 1;
                p[c] = u;
            }
        }
    }
}



int main()
{

    int n = 6;
    for(int i = 0 ; i< n; i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    source = 0;
    BFS(source,n);
    cout<<"\n\n";
    cout<<"distance from source of i th node \n";
    for(int i = 0 ; i < 10 ; i++)
    {
         cout<<source<<" to node "<<i<<" = "<<d[i]<<"\n";
    }
    cout<<"\nprents of i th node\n";

    for(int i = 0 ; i < 10 ; i++)
    {
        cout<<i<<" "<<p[i]<<"\n";
    }

    return 0;
}
/*
0 1
0 2
1 2
1 3
2 4
3 4



0 1
0 2
1 2
2 0
2 3
3 3

*/



