#include<bits/stdc++.h>
using namespace std;
#define  nl                    "\n";
void solve()
{
   int n;
   cin>>n;
   set<int> s;
   for(int i = 0 ; i< n ; i++ )
   {
       int a;
       cin>>a;
       s.insert(a);
   }
   if(s.size()==n)
   {
       cout<<"YES"<<nl;
   }
   else{
    cout<<"NO"<<nl;
   }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();

    return 0;
}
