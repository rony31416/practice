//https://atcoder.jp/contests/abc138/tasks/abc138_d

#include<bits/stdc++.h>
using namespace std;

typedef  long long int ll ; 
typedef  long double ld;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  vector<pair<int,int> > vpi;
typedef  set<ll>s;
typedef  map<ll,ll>mll;
typedef  pair<int,int> pint;
double   pi = 3.14159265359;
#define  FOR(n,v)             for(int i=0;i<n;i++) cin>>v[i];
#define  pb                    push_back
#define  ttimes(T)            while(T--)
#define  fastIO               ios_base::sync_with_stdio(false);
#define  nl                  endl
#define  py                  cout<<"YES"<<nl;
#define  pn                  cout<<"NO"<<nl;


vector<int> adj[200005];
int vis[200005];


void dfs(int node,int indx,int value)
{
	vis[node] += value;
	for(int u : adj[node])
	{
		if(indx!=u)
		dfs(u,node,vis[node]);
	}
	
	
}


int main()
{
	int n,m,a,b,q;
	cin>>n>>m;
	for(int i = 1 ; i<n ;i++){
		cin>>a>>b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	
	for(int i =0 ; i<m;i++)
	{
		 cin>>a>>b;
		 vis[a]+=b;
	}
	dfs(1,1,0);
	for(int i = 1;i<=n;i++)
	{
		cout<<vis[i]<<" ";
	}	
}
