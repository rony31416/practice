#include <bits/stdc++.h>
using namespace std;

void solve(){
int n;
cin>>n;
map<string,int> m;
for(int i = 0 ; i< n ; i++) {
    string s;
    cin>>s;
    m[s]++;
   
}
   int mx = -1;
   string ans = "";
   for(auto u : m ) 
   {
    if(u.second >= mx) {
        mx = u.second;
        ans = u.first;
    }

   }
   cout<<ans<<"\n";
}
int main()
{

    int T = 1;
   //cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
