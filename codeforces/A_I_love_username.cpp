#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0 ; i< n ; i++) 
    {
        cin>>v[i];
    }
    int ok2=0,ans = 0;
    int cnr=0;
    for(int  i = 0 ; i < n ; i++) {
        for(int  j = 0 ; j < i ; j++) 
        {
           if(v[i] > v[j]) {
            cnr++;
           }
           else if(v[i] < v[j]) ok2++;
        }


        if( cnr == i or ok2 == i) {
           // cout<<i<<" ";
            if(i != 0)
            ans++;
        
        
        }
        ok2 = 0;
        cnr = 0;

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
