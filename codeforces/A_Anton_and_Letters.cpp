#include<bits/stdc++.h>
using namespace std;

void solve(){
    map<char,int> m;
    string s;
     getline(cin,s);
    for(int  i = 0 ; i< s.size() ; i++){
        m[s[i]]++;
    }
    for(auto u : m) {
       // cout<<u.first<<" "<<u.second<<"\n";
    }
    if(m.size() == 2) {
        cout<<0<<"\n";
    }
    else if(m.size()  == 3) {
        cout<<1<<"\n";
    }
    else
    cout<<m.size()-4<<"\n";

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
