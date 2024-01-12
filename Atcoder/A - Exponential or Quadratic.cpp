//https://atcoder.jp/contests/abc238/tasks/abc238_a
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
ll vis[1000005];

priority_queue<int,vector<int>,greater<int> > q;

void psq()
{
	for(int i = 1; i<= 1000  ; i++) vis[i*i] = 1;
}

void solve()
{
//	vector<ll> v;
//	int n;
//	cin>>n;
//	for(int i = 0 ; i< n ; i++)
//	{
//		ll p,q;
//		cin>>p>>q;
//		ll k = p - q;
//		if(k>0)
//	    v.push_back(k);
//	}
//	sort_d(v);
//	//for(int i = 0 ; i< n ;i++) cout<<v[i]<<" ";
//	//cout<<nl;
//	ll ans = 0,c=0;
//    for(ll i = 0 ; i< v.size();i++)
//    {
//    	c++;
//    	ans+=v[i];
//    	if(ans>= 30)
//    	break;
//	}
//	if(ans<30)
//	{
//		cout<<-1<<nl;
//	}
//	else cout<<c<<nl;

}




int main()
{
	ios_base::sync_with_stdio(false);
    //cin.tie(NULL); 
	double n;
	cin>>n;
	if(n/2.0 > log2(n)) cout<<"Yes";
	else cout<<"No";
	return 0;

}