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
#define  fr(n)              for(int i=0;i<n;i++)
#define pb                    push_back
#define  ttimes(T)            while(T--)
#define  fastio               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define   nl                  endl
int main()
{
    fastio

    ll t;
    cin>>t;
    ttimes(t)
    {
        int n,m,i;
        cin>>n>>m;
        char s[n][m];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j ++)
            {
                cin>>s[i][j];
            }



        for(int i = n-1 ; i >=0 ; i--)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(s[i][j] == '*')
                {

                    int k = i ;

                    while(s[k+1][j] == '.' && k <n-1)
                    {
                        swap( s[k+1][j], s[k][j]);
                        k++;

                    }
                }
            }
        }


        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < m ; j ++)
            {
                cout<<s[i][j];
            }
            cout<<nl;

        }

    }

    return 0;
}


 
