#include<bits/stdc++.h>
using namespace std;

void solve(){

    int a,b;
    cin>>a>>b;
    int ans = 0 ;
    while(a<=b)
    {
       a*=3;
       b*=2;
       ans++;
    }
    cout<<ans<<"\n";

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
