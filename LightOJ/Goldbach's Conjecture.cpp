
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
const ll N = 10000005;
bool is_prime[N];
void sieve()
{
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i<= N ; i++)is_prime[i] = true;

    for(int  i = 2; i*i<= N; i++)
    {
        if(is_prime[i] == true)
        {
            for(int j = i*i ; j <= N ; j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
}

int main()
{
    fastIO
    sieve();
    int t;
    cin>>t;
   for(int i = 1 ; i<= t ;i++)
    {
       int c = 0 ;
       ll n;
       cin>>n;
       if(n == 4 ){
         printf("Case %d: %d\n",i,1);
         continue;

       }
       for(int i = 3 ; i < (n/2 + 1);i+=2)
       {
           if(is_prime[i]==true && is_prime[n-i] == true)c++;
       }
       printf("Case %d: %d\n",i,c);


    }

    return 0;

}
