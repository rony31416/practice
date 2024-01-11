//https://atcoder.jp/contests/abc238/tasks/abc238_b
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

void solve()
{ 
    int n;
    cin>>n;
    int v1[n+2],v2[n+2];
    for(int  i = 0 ; i< n ; i++)cin>>v1[i];
    v2[0] = v1[0];
    for(int i = 1 ; i<n ; i++)
    {
    	v2[i] = v2[i-1] + v1[i];
     	v2[i] = v2[i]%360;
     		  	
	}    
	v2[n] = 360;
	sort(v2,v2+n);
	int x =v2[0];
	for(int i = 1 ; i<= n ; i++)
	{ 
	    int d = v2[i]-v2[i-1];
		x = max(x,d);
	}
	cout<<x<<nl;
    
   
   
}

int main()
{ 
  
    solve();
    
    return 0;

}