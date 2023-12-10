#include<bits/stdc++.h>
using namespace std;

void solve()  {
        int a,b;
        cin>>a>>b;
        cout<<min(a,b)<<" "<<(abs(a-b)/2)<<"\n";


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
