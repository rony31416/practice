#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int  n;
    cin>>n;
    double ans = 0.0;
    for(int  i = 0 ; i< n ; i++) 
    {
        int a;cin>>a;
        ans+=(double)a;
    }
    ans/=n;
    printf("%.12lf\n",ans);

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
