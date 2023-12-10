#include<bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int cnt = 0;
     while (n--) 
     {
         string s;
         cin>>s;
         if(s == "X++" or s == "++X") cnt++;
         else cnt--;
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
