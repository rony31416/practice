//https://atcoder.jp/contests/abc277/tasks/abc277_b
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

template<typename A, typename B> ostream& operator<<(ostream& os, const pair<A, B>&p) {return os<<'(' << p.first << ", " << p.second << ')';}
template<typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type> ostream& operator<<(ostream& os, const T_container& v) {os << '{'; string sep;for(const T& x: v) os << sep << x, sep = ", "; return os << '}';}
void dbg_out() {cerr<<endl;}
template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T) {cerr << " " << H; dbg_out(T...); }

#ifdef SMIE
#define debug(args...) cerr << "(" << #args << "):",dbg_out(args)
#else
#define debug(args...)
#endif

const ll N = 10e7+2;
ll power(ll a, ll n)
{
    ll res = 1;
    while(n)
    {
        if(n%2)
        {
            res = ((res)*(a));
            n--;
        }
        else
        {
            a = ((a)*(a));
            n/=2;
        }
    }
    return res;
}


void solve()
{
    int n;cin>>n;

    set<string>s;
    string a="",b="";
    for(int i = 0 ; i< n ; i++)
    {
        string t;
        cin>>t;
        a+=t[0];
        b+=t[1];

        s.insert(t);
    }
    //cout<<a<<" "<<b<<nl;
    //dbg_out(s);
   // cout<<s.size()<<nl;
    if(s.size() != n) {
        pn
        return;
    }
    string v1 = "HDCS";
    string v2 = " A23456789TJQK";
    for(int i = 0 ; i < n ; i++)
    {

            if(find(all(v1),a[i]) == v1.end())
            {
                pn
               // cout<<"rerere"<<nl;
                return;
            }

    }
    for(int i = 0 ; i < n ; i++)
    {

            if(find(all(v2),b[i]) == v2.end())
            {
                pn
               // cout<<"rerere"<<nl;
                return;
            }
    }
    py
}
int main()
{
   //int t;
   //cin>>t;
  // while(t--)
    solve();

    return 0;
}
