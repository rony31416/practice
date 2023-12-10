#include<bits/stdc++.h>
using namespace std;

void solve(){
    map<int,int> m;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++) 
    {
        int a;cin>>a;
        m[a]++;
    }
   // cout<<m[1]<<" "<<m[2]<<" "<<m[3]<<" "<<m[4]<<"\n";
    int ans = 0 ; 
    ans += m[4];
    ans += m[3];
    if(m[1] <= m[3] ) m[1] = 0;
    else m[1] = m[1] - m[3];
    ans+= m[2]/2;
    if(m[2]%2 == 1) m[2] = 1;
    if(m[2] == 1 ){
        if(m[1]>=2) m[1]-=2;
        else m[1] = 0;
        ans++;
    }
    ans+= ((m[1]+3)/4);
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
