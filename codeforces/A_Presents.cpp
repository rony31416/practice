#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int  i =0 ; i< n ; i++){
        int a;cin>>a;
        m[a] = i+1;
    }
    for(auto u : m) 
    {
       cout<<u.second<<" ";
    }
    cout<<'\n';

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
