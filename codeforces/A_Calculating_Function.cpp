#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int  n;
    cin>>n;
    if(n&1) 
    {
        cout<<(n+1)/(-2)<<"\n";
    }
    else{
        cout<<(n/2)<<"\n";
    }

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
