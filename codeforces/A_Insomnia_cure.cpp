#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int ans = 0;
    for(int i = 1 ; i <= e ; i++) 
    {
        if(i%a == 0 or i%b == 0 or i%c == 0 or i%d == 0) {
            ans++;
        }
    }
    cout<<ans<<"\n";


}

int main()
{

    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }

    return 0;
}
