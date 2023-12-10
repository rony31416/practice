#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a;
    int ans = 0;
    for(int i = 0 ; i < a.size() - 1 ; i++)
    {
        if(a[i] == a[i+1])
        {
            ans++;
        }
        //else i++;
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
