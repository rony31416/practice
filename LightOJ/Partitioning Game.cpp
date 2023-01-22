#include<bits/stdc++.h>
using namespace std;
int grundy_[10020];
int vis[10005];
void grundy()
{
   for(int  i = 0 ; i < 10005;i++)
   {
     memset(vis,0,sizeof(vis));
     for(int j = 1;  j*2 < i ;j++)
      vis[grundy_[j]^grundy_[i-j]]=1;
     for(int j = 0 ; ; j++)
     {
         if(!vis[j])
         {
             grundy_[i] = j;
             break;
         }
     }
   }

}

int main()
{
    grundy();
    int t;
    cin>>t;
    for(int i = 1; i<= t; i++)
    {
        long long int  n,ans = 0;
        cin>>n;

      for(int  j = 0 ; j < n ; j++)
        {
            int a;
            cin>>a;
            ans ^= grundy_[a];

        }
        cout<<"Case "<<i<<": ";
        if(ans == 0)
        {
            cout<<"Bob\n";
        }
        else
        {
            cout<<"Alice\n";
        }


    }
    //for(int i = 1; i< 100 ; i++)cout<<i<<"   "<<grundy_[i]<<endl;


    return  0 ;
}
