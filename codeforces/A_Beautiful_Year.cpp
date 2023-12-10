#include<bits/stdc++.h>
using namespace std;

bool check(int n){
    string s = to_string(n);
    set<char> se;
    for(int i = 0 ; i< s.size() ; i++) 
    {
        se.insert(s[i]);
    }
    if(se.size() == 4) {
        cout<<s<<"\n";
    
    return true;
    }
    return false;
}
void solve(){
    int n;
    cin>>n;
    while(1)
    {
        n++;
        if(check(n)){
            break;
        }
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
