//https://lightoj.com/problem/large-division




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

void solve(int cas)
{
    string s;
    ll b;
    cin>>s>>b;
    b = abs(b);
    ll reminder = 0;
    for(int i = 0 ; i< s.size();i++)
    {
        if(s[i] == '-')continue;
        reminder = reminder*10+(s[i]-'0');
        reminder = reminder%b;

    }


    cout<<"Case "<<cas<<": ";
    if(reminder){
        cout<<"not divisible"<<nl;
    }
    else{
        cout<<"divisible"<<nl;
    }

}


int main()
{
    fastIO
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 1 ; i<=t;i++)
        solve(i);
    //cout<<ncr_mod(n,r,p);

    return 0;

}
