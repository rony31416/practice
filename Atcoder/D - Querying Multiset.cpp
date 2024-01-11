//https://atcoder.jp/contests/abc212/tasks/abc212_d

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
#define  sort_a(v)             sort(v.begin(),v.end());
#define  all(v)                v.begin(),v.end()
#define  sort_d(v)             sort(v.begin(),v.end(),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");


void solve()
{ 
   multiset<ll,greater<ll> > s;
    ll q;
    ll cnt = 0;
    cin>>q;
    while(q--)
    {
    	 int a,b;
    	 cin>>a;
    	 if(a==1){
    	 	cin>>b;
    	 	s.insert(b-cnt);
    	 	
		 }
		else if(a==2){
    		cin>>b;
    		cnt+=b;
		} 
  	 
		 
		 
		 else
          { 
          cout<<*(--s.end())+cnt<<nl;
          s.erase(--(s.end()));
          	
		 }    	 
    
    	 
	}
    
  return;
}


int main()
{ 
  
    solve();
    
    return 0;

}