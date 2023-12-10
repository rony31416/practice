#include<bits/stdc++.h>
using namespace std;

void solve()  {
     int n,m;
     cin>>n>>m;
     int mi = 60*4;
     mi -= m;
     int ans = 0 ;
     for(int i = 0,j = 1 ; i <= mi ; j++) {
         ans++;
        // cout<<i<< " ";
        i += 5*j;
     }
     cout<<min(ans-1,n)<<"\n";
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
