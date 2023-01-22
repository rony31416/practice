#include<bits/stdc++.h>
using namespace std;
int i = 1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        long long int a[n+5],row[n+5],col[m+5];
        long long int ans =0,odd=0;
        long  long in= 0;
        for(int i = 0; i<n; i++)
        {

            for(int i = 0 ; i< m ; i++)
            {
                int k ;
                cin>>k;
                in+=k;
            }
            row[i] = in;
            in = 0 ;
        }
        //int ans = 0 ;
        for(int i = 0 ; i< n ; i++) ans ^= row[i];

        //cout<<ans<<endl;
        //cout<<odd<<endl;


        if( ans == 0)
        {
            cout<<"Case "<<i<<": Bob"<<endl;

        }
        else
        {
            cout<<"Case "<<i<<": Alice"<<endl;
        }
        i++;

    }
    return 0;
}

