#include<bits/stdc++.h>
using namespace std;


void solve(){
     int n;
     cin>>n;
     int  MAX = -1;
     int  total = 0;
     for(int i = 0 ; i<  n ; i++){
         int a , b ; cin>>a >> b;
         total -= a;
         total += b;
         MAX = max(MAX,total);
     }
     cout<<MAX<<"\n";
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
