#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a = 0 , b = 0;
    for(int i = 1  ; i <= 5 ; i++) 
    {
        for(int j = 1  ; j <= 5 ; j++) 
        {
            int x;
            cin>>x;
            if(x == 1) 
            {
                a = i , b = j;
               // cout<<i<< " "<<j<<"\n";
            }
        }
    }
   // cout<<a<<" "<<b<<"\n";
    cout<<abs(a-3)+abs(b-3)<<"\n";

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
