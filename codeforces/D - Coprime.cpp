#include<bits/stdc++.h>
using namespace std;
#define  nl                    "\n";
vector<int> coprime[1002];
void cal()
{
    for(int i = 1 ; i<=1000; i++)
    {
        for(int j = 1 ; j <= 1000; j++)
        {
            if(__gcd(i,j) == 1)
            {
                coprime[i].push_back(j);
            }
        }
    }


}

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+2);
    int lastposition[1005];
    for(int i = 0 ; i < 1005; i++) lastposition[i] = -1;
    //cout<<lastposition[10];
    for(int i = 1 ; i<= n ; i++)  cin>>v[i];

    for(int i = 1 ; i<= n ; i++)
        lastposition[v[i]] = i;

    int ans = 0;
    for(int i = 1 ; i<= 1000 ; i++)
    {
        if(lastposition[i] == -1) continue;
        if(i == 1)
        {
            ans = max(ans,2*lastposition[i]);
            continue;
        }

        for( auto u : coprime[i])
        {
            if(lastposition[u] != -1) ans = max(ans,lastposition[u]+lastposition[i]);
        }

    }
    if(ans == 0) {
        cout<<-1<<nl;
    }
        else cout<<ans<<nl;
}

int main()
{
    cal();
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
