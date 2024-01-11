//https://atcoder.jp/contests/abc144/tasks/abc144_b


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
#define  py                    printf("Yes\n");
#define  pn                    printf("No\n");
#define  pmone                 printf("-1\n");

int p(ll a)
{
    int c = 0;
    while(a)
    {
        c++;
        a/=2;
    }

    return c-1;
}

void solve()
{

  int n;
  cin>>n;
  for(int i = 1 ; i <= 9 ; i++)
  {
      if(n%i == 0 and n/i <10) {
        py
        return;
      }
  }
   pn
}


int main()
{
    int t;
    //  cin>>t;
    //  while(t--)
    solve();

    return 0;
}
