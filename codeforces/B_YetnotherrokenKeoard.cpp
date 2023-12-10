#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<int> u,l;
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i] >= 'A' and s[i] <= 'Z')
       {
        if(s[i] == 'B' and u.size() > 0)
        s[u.back()] = '#';
        else
        u.push_back(i);
       }
       else if(s[i] >= 'a' and s[i] <= 'z')
       {
        if(s[i] == 'b' and l.size() > 0)
        s[l.back()] = '#';
        else
        l.push_back(i);
       }

    }

   for(auto u : s) 
   {
    if(u != '#' ) cout<<u;
   }
   cout<<"\n";
}
int main()
{

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }

    return 0;
}
