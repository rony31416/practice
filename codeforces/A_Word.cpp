#include<bits/stdc++.h>
using namespace std;

void solve()
{
     //cout<<(int)'a'<<" "<<(int)'A'<<"\n";
    string s;
    cin>>s;
    int  u = 0, l = 0 ;
    for(int  i = 0 ; i< s.size() ; i++)
    {
        if((int)s[i] >= 97 ) l++;
        else u++;
    }
    //cout<<u<<" " << l <<"\n";
    if(u > l )
    {
        for(int  i = 0 ; i < s.size() ; i++)
        {
            s[i] = toupper(s[i]);
        }
        cout<<s<<"\n";
        return ;
    }
    for(int  i = 0 ; i< s.size() ; i++)
    {
        s[i] = tolower(s[i]);
    }
    cout<<s<<"\n";

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
