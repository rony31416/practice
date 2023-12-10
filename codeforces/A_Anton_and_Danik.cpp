#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int a = 0 ,d = 0;
    for(int  i = 0 ; i< n ; i++) 
    {
        if(s[i] == 'A') a++;
        else d++;
    }
    if(a>d) 
    {
        cout<<"Anton\n";
    
    }
    else if(d > a)
    {
        cout<<"Danik\n";
    }
    else{
        cout<<"Friendship\n";
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
