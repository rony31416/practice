#include<bits/stdc++.h>
using namespace std;
typedef  long long ll ;
typedef  long double ld;
typedef  vector<int> vi;
typedef vector<pair<int,int>>vpi;
typedef  pair<int,int> pi;
int i  = 0;
#define  fr(i,n)      for(int i=0;i<n;i++)
#define pb               push_back
#define  ttimes(T)    while(T--)
#define  fastio         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define   nl            endl
using namespace std;
long long n;
long long x;
int main()
{
    int a[1000000] = {0};
    for(int i = 2; i<=1000000; i++)
    {
            if(a[i] == 0 )
            {
                    for( int j = 2 ; j*i <= 1000000; j++)
                    {
                        a[i*j]=1;
                    }
            }
    }

    int t;
    cin>>t;
    while(t--)
    {
        ll x;
        cin>>x;
        ll m = sqrt(x);
        if(x ==1) cout<<"NO"<<nl;
        else if(m*m == x && a[m] == 0 )
        {
            cout<<"YES"<<nl;
        }
          else cout<<"NO"<<nl;
    }
    return 0 ;
}
