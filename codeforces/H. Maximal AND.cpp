#include<bits/stdc++.h>
using namespace std;

typedef  long long ll ;
typedef  long double ld;
typedef  vector<ll> vll;
typedef  vector<string> vs;
typedef  vector<pair<int,int>>vpi;
typedef  set<ll>s;
typedef  map<ll,ll>mll;
typedef  pair<int,int> pint;
double pi = 3.14159265359;
#define  fr(n)                for(int i=0;i<n;i++)
#define pb                    push_back
#define  ttimes(T)            while(T--)
#define  fastIO               ios_base::sync_with_stdio(false);
#define   nl                  endl


int main()
{

    fastIO
    cin.tie(0);
    cout.tie(0);


    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        ll ans =  0;
        mll m;
        for(int i = 0 ; i< n ; i++)
        {
            ll x;
            cin>>x;
            for(int i = 0 ; i < 31; i++)
            {
                if(x&1) m[i]++;
                x = (x>>1);
            }
        }
        for(int i = 30 ; i>=0 ; i--)
        {
            ll y = n-m[i];
            if(k >= y)
            {
                ans+=pow(2,i);
                k -=y;
            }
        }
        cout<<ans<<nl;
    }
    return 0 ;
}
