#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    int ans = 0,sum = 0;
    int mx = INT_MAX;
    for(int i = 0 ; i < n ; i++) 
    {
        int a;
        cin>>a;
        if(sum + a <  0) ans++;
        else
        sum+=a;

       //
    }
   // mx = max(mx,ans);
    cout<<ans<<"\n";
   // cout<<n-sum<<"\n";

}
int main()
{

    int T = 1;
    //cin>>T;
    while(T--)
    {
        solve();
    }

    return 0;
}
