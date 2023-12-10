#include<bits/stdc++.h>
using namespace std;

void solve()
{
string a,b;
cin>>a>>b;
for(int i = 0 ; i < a.size() ; i++)
{
     a[i] = tolower(a[i]);
}

for(int i = 0 ; i < b.size() ; i++)
{
     b[i] = tolower(b[i]);
}
//cout<<a<<" "<<b<<"\n";
int ans = 0;
if(a < b) ans  = -1;
 else if(a > b ) ans = 1;

cout<<ans<<"\n";



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
