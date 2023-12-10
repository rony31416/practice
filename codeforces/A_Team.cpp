#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int cnt = 0;
     while (n--) 
     {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c >=2) cnt++;
     }
     cout<<cnt<<"\n";

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
