#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int   a,b,c;cin>>a>>b>>c;
    int mn = 100000;
    for(int d = 0 ; d <= 100 ; d++)
   {
      mn = min(mn,abs(d-a)+abs(d-b)+abs(d-c));
     //cout<<mn<<" ";
   }

    cout<<mn<<"\n";
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
