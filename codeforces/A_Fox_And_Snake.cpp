#include<bits/stdc++.h>
using namespace std;

void solve()  {
     int n,m;
     cin>>n>>m;
     string s1 = "",s2="",s3="";
     for(int  i = 0 ; i < m ; i++) 
     {
        s1+="#";
        s2+=".";
        s3+=".";
     }

     s2[m-1] = '#';
     s3[0] = '#';
     cout<<s1<<"\n";
     int ok = 1;
     for(int i = 1 ; i <= n - 2 ; i++) 
     { 
        if(i%2 == 1 ){
            if(ok == 1)
            {
                ok = 0;
                cout<<s2<<"\n";
            }
            else{
                ok = 1;
                cout<<s3<<"\n";
            }
        
        }
        else cout<<s1<<"\n";
     }
     cout<<s1<<"\n";


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
