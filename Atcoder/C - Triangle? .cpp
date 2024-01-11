//https://atcoder.jp/contests/abc224/tasks/abc224_c

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

ll gcd(ll a,ll b)
{
      if(b == 0 ) return a;

      return gcd(b,a%b);

}

long long int factorial(int n)
{
      if (n>=1)
            return n*factorial(n-1);
      else
            return 1;
}


double dis(double x1,double y1,double x2,double y2)
{
      double di = sqrt(  (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
      return di;

}

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu ()
{
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n )
{
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


void solve()
{
    int n;
    cin>>n;
    vector<pair<double,double>> v;
    for(int i = 0 ; i< n ; i++)
    {

        double x,y;
        cin>>x>>y;
        v.pb({x,y});
    }
    ll ans = 0 ;
    for(int i = 0 ; i < n ; i ++)
    {
        for(int j = 0 ; j <n && j!=i ; j++)
        {
            for(int k = 0 ; k<n && k!=i && k!=j;k++)
            {
                double x1 = v[i].first,y1=v[i].second;
                double x2 = v[j].first,y2=v[j].second;
                double x3 = v[k].first,y3=v[k].second;
                double  ar = (x1-x2)*(y2-y3)-(y1-y2)*(x2-x3);
                if(ar!=0.00 ) ans++;
            }
        }
    }
    cout<<ans<<nl;


}

int main()
{
    fastIO
    int t =1;
    //cin>>t;
    while(t--)
        solve();

    return 0;

}
