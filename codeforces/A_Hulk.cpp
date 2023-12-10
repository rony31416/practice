#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s1 = " that I love",s2 = " that I hate";
    string ans = "I hate";

    int n;
    cin>>n;
    for(int  i = 1 ; i < n  ; i++) 
    {
      if(i&1) ans+=s1;
      else ans+=s2;  
    }
    ans+=" it";
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
