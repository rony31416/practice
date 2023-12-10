#include<bits/stdc++.h>
using namespace std;

void solve(){

  int n;
  cin>>n;
  int cnt = 0 ;
   for(int i = 0 ; i < n ; i++) {
    int a;
    cin>>a;
    cnt+=a;
   }
   if(cnt > 0) 
   {
    cout<<"HARD\n";
   }
   else {
    cout<<"EASY\n";
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
