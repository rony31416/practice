#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    int ans = 0;
    int a,b;
    vector<int> v(n),v2(n);;
    for(int i = 0 ; i < n ; i++) 
    {
        cin>>v[i]>>v2[i];
    }
    for(int i = 0 ; i < n ; i++) 
    {
        for(int  j = 0 ; j < n ; j++) 
        {
            if(v[i] == v2[j]) ans++;
        }
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
