#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string s;
    cin>>s;
    set<int> se;
    for(auto u : s) 
    {
        
        se.insert(tolower(u));
    }
    if(se.size() == 26) {
        cout<<"YES\n";
    }
    else 
    {
        cout<<"NO\n";
    }




}

int main()
{

    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }

    return 0;
}
