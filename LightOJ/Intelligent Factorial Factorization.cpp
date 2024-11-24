//https://lightoj.com/problem/intel-factor-factorization
#include<bits/stdc++.h>
using namespace std;
typedef  long long int          ll ;
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    "\n";
int p = 0;
map<int,int> m;
void primefact(int n)
{
    //vector<pair<ll,ll> > v;
    //map<int,int> m;
    //ll p = n ;
    for(int i = 2 ; i <= n ; i++)
    {
        if(n%i == 0)
        {
            int cnt = 0 ;
            while(n%i == 0)
            {
                m[i]++;
                n/=i;
            }
            //v.push_back({i,cnt});
            //m[i] = m[i]+cnt;
        }

    }

    //cout<<nl;
    //m.clear();
}

int main()
{
    //fastIO
    //cin.tie(NULL);
    int t;
    cin>>t;
    for(int i = 1 ; i<= t ; i++)
    {
        int n;
        cin>>n;
        p = n;
        for(int j = 2 ; j<=n; j++)
            primefact(j);

        printf("Case %d: %d = ",i,p);
        int siz = m.size(),w = 0;
        for(auto u : m )
        {
            siz--;
            if(siz == w)
            {
                printf("%d (%d)\n",u.first,u.second);
            }
            else
                printf("%d (%d) * ",u.first,u.second);

            //cout<<" * ";
        }
        m.clear();
    }

    return 0;
}
