#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0 ; string t = "";
     string s;
    for(int  i = 0 ; i< n ; i++) 
    {
        cin>>s;
        if(t != s) ans++;
        
        t = s;
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
