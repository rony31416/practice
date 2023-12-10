#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0 ; 
    for(int i = 0 ; i< n ; i++) 
    {
        int p,q;cin>>p>>q;
        if(q > p + 1)ans++;
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
