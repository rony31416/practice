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
    int t;
    cin>>t;
    ttimes(t)
    {
        int n;
        cin>>n;
        vi v(n);
        for(int i = 0 ; i < n; i++) cin>>v[i];

        int cnt1 = 0, cnt2 = 0,a = 0;
        int sum1 = 0,sum2 = 0;
        int i = 0, j = n -1;
        while(i <= j )
        {

            if(sum1 >= sum2)
            {
                sum2+=v[j];
                j--;
                cnt2++;
            }
            else
            {
                sum1+=v[i];
                cnt1++;
                i++;

            }
            //cout<<cnt1<<" "<<cnt2<<nl;
            if(sum1 == sum2)
            {
                a = cnt1+cnt2;
            }

        }
        cout<<a<<nl;

    }

    return 0;
}


 
