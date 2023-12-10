#include<bits/stdc++.h>
using namespace std;

void solve()  {
  int n;
  cin>>n;
  for(int  i = 0 ; i< n ; i++) 
  {
    string s;cin>>s;
    for(int  i = 1 ; i <= 8 ; i++) 
    {
        if(s[1]-'0' != i)
         cout<<s[0]<<i<<"\n";
    }
     char c = 'a';
    for(int i = 1 ; i <= 8 ; i++) 
    {
       
        if(c != s[0])
        {
            cout<<c<<s[1]<<"\n";
          
        }
          c = c + 1;
    }
  }
  cout<<"\n";

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
