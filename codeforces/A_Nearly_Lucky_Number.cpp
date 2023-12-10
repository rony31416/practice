#include<bits/stdc++.h>
using namespace std;

bool check(string n) 
{
    int cnt = 0;
    for(int i = 0 ; i < n.size() ; i++) 
    {
        //cout<<n[i]<<" ";
        if(n[i] == '4' or n[i] == '7' ) cnt++;
    }
    //cout<<cnt <<" "<<n.size()<<"\n";
    if(cnt == n.size()) return true;
    return false;
}

void solve(){
    string s;cin>>s;
    int four = 0 , seven = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i] == '4') four++;
        else if(s[i] == '7') seven++;
    }  

    if(check(to_string(seven+four))) {
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
