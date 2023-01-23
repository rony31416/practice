#include<bits/stdc++.h>
using namespace std;
typedef  long long ll ;
typedef  long double ld;
typedef  vector<ll> vi;
typedef  vector<string> vs;
typedef  vector<pair<int,int>>vpi;
typedef  set<ll>s;
typedef  map<ll,ll>m;
typedef  pair<int,int> pint;

double pi = 3.14159265359;
#define  fr(i,n)  for(int i=0;i<n;i++)
#define pb        push_back
#define  ttimes(T)   while(T--)
#define  fastio     ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define   nl        endl
int main()
{
    fastio
    int t,i,mx=0;
    ll n,l;
    cin>>n>>l;

    vi v(n);
    for(i = 0 ; i< n; i++) cin>>v[i];


    sort(v.begin(),v.end());
    for( i = 0 ; i< n-1; i++)
    {
        int dif = v[i+1]-v[i];

        mx = max(mx,dif);
    }


    double d = (double)mx/2;
    double y = v[0];
    double x = max(y,d);
    double z = l - v[n-1];
    cout<<fixed<<setprecision(10)<<max(z,x)<<endl;


    return 0;
}


 
