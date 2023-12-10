#include<bits/stdc++.h>
using namespace std;

void solve()  {
     int n,m;
     cin>>n>>m;
     vector<int> v(m);
     for(int  i = 0 ; i< m ; i++){
        cin>>v[i];
     }
     int mn = INT_MAX;
     sort(v.begin(),v.end());
     for(int i = 0; i <= m - n ; i++) {
       // cout<<mn<<"\n";
           mn = min(mn,v[n+i-1]-v[i]);
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
