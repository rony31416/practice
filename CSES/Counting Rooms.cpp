#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  nl                    "\n";

int n,m;
char ar[1005][1005];
int vis[1005][1005];

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool isvalid(int x,int y)
{
    if(x < 1 || x > n || y < 1 || y > m) return false;

    if(vis[x][y] == 1 || ar[x][y] == '#') return false;

    return true;
}

void dfs(int x,int y)
{
        vis[x][y] = 1;

        for(int i = 0 ; i < 4 ; i++)
        {
                if(isvalid(x+dx[i],y+dy[i]))
                {
                    dfs(x+dx[i],y+dy[i]);
                }
        }
}
/*
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
*/
int main()
{

    cin>>n>>m;

    for(int i = 1 ; i <= n ; i++)
         for(int j = 1 ; j <= m ; j++)
              cin>>ar[i][j];


    int cc = 0;

    for(int i = 1 ; i<= n ; i++)
    {
            for(int j = 1 ; j <= m ; j++)
            {
                    if(vis[i][j] == 0 and ar[i][j] == '.')
                    {
                            cc++;
                            dfs(i,j);

                    }
            }
    }

    cout<<cc<<nl;

    return 0;
}
