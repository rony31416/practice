#include<bits/stdc++.h>
using namespace std;

void solve(){

    int a,b,c;
    cin>>a>>b>>c;
    long long int ans = c*(c+1);
    ans/=2;
    ans = ans*a - b;
    if(ans < 0 ) ans = 0;
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
