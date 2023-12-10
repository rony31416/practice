#include<bits/stdc++.h>
using namespace std;

void solve(){
    map<int,int> m;
    for(int  i =0 ; i< 4 ; i++){
        int a;cin>>a;
         m[a]++;
    }
    cout<<4-m.size()<<"\n";

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
