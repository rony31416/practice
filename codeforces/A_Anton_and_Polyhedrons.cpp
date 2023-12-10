#include<bits/stdc++.h>
using namespace std;

void solve()  {
    int n;
    cin>>n;
    int ans = 0;
    for(int i = 0 ; i< n ; i++) {
        string s;
        cin>>s;
        if(s == "Tetrahedron") ans+=4;
        else if( s == "Cube") ans+=6;
        else if(s == "Octahedron") ans+=8;
        else if(s == "Dodecahedron") ans+= 12;
        else ans+= 20;
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
