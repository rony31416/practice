#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    set<char> se;
    for(auto u : s) {
        se.insert(u);
    }
    int a = se.size();
    if(a&1) {
        cout<<"IGNORE HIM!\n";
    }
    else{
        cout<<"CHAT WITH HER!\n";
    }

}
int main(){

   int T = 1;
   //cin>>T;
   while(T--)
   {
    solve();
   }

    return 0;
}
