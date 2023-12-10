#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n,h;
    cin>>n>>h;
    int ans = 0 ;
    for(int  i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        if(a>h) 
        {
            ans+=2;
        }
        else ans++;
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
