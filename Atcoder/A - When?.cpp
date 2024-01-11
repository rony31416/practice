//https://atcoder.jp/contests/abc258/tasks/abc258_a
#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll ;
typedef  long double            ld;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int> >  vpi;
typedef  set<ll>                s;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
double   pi = 3.14159265359;
#define  FOR(n,v)              for(ll i=0;i<n;i++) cin>>v[i];
#define  REP(i,n)              for(int i=0;i<n;i++)
#define  pb                    push_back
#define  ttimes(T)             while(T--)
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    "\n";
#define  all(v)                v.begin(),v.end()
#define  sort_a(v)             sort(all(v));
#define  sort_d(v)             sort(all(v),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");

double dis(double x1,double y1,double x2,double y2)
{
	double di = sqrt(  (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	return di;

}

int gcd(int a,int b)
{
	if(b == 0 ) return a;

	return gcd(b,a%b);

}

vector<int> adj[100005];
int vis[1000005];
vector<int> ans;
priority_queue<int,vector<int>,greater<int> > q;

void psq()
{
	for(int i = 1; i<= 1000  ; i++) vis[i*i] = 1;
}

void solve()
{
    	int n;
    	cin>>n;
    
    	int k = n%60;
    	if(n%60 < 10) printf("%d:%d%d\n",21+n/60,0,n%60);
		else
    	printf("%d:%d\n",21+n/60,n%60);
    	//cout<<21+n/60<<":"<<<<nl;
}


int main()
{
	fastIO
	int t;
//	cin>>t;
//	while(t--)
	solve();

	return 0;

}