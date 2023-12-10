#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>v(n);
    for(int  i = 0 ; i < n ; i++) 
    {
        cin>>v[i];
    }
    int max_i = n-1,min_i = 0;
    int mx = v[n-1],mn = v[0];
    for(int i = 1 ; i < n ; i++) {

        if(v[i] <= mn) {
             mn = v[i];
             min_i = i;      
        }
    }
    for(int i = n - 1 ; i >= 0 ; i--) {
        if(v[i] >= mx) {
            mx = v[i];
            max_i = i;
        }
    }
     int ans = max_i+(n-min_i-1);
       if(max_i>= min_i) ans--;
       cout<<ans<<"\n";
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
