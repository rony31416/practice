
#include<bits/stdc++.h>
using namespace std;

typedef  long long int ll ;


int grundy_(int n)
{
    if(n<2) return 0;
    if(n%2 == 0) return n/2;
    else{
        return grundy_(n/2);
    }

}

int main()
{
    //memset(grundy,-1,sizeof(grundy));

    //find_grundy_number(10003);
    //for(int i = 1 ; i< 100 ; i++)cout<<i<<" "<<grundy[i]<<nl;
    int t;
    cin>>t;
    for(int i = 1 ; i<= t; i++)
    {

        int k;
        cin>>k;
        ll ans = 0 ;
        while(k--)
        {
            int a;
            cin>>a;
            ans ^= grundy_(a);
            //cout<<ans<<nl;
        }
        cout<<"Case "<<i<<": ";
        if(ans == 0) {
            cout<<"Bob"<<"\n";
        }
        else{
            cout<<"Alice"<<"\n";
        }

    }
}
