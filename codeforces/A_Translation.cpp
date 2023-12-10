#include<bits/stdc++.h>
using namespace std;


void solve(){
   string s1,s2;
   cin>>s1>>s2;

   //cout<<s1<<" "<<s2<<"\n";
   reverse(s2.begin(),s2.end());
   if(s1==s2) 
   {
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
