
#include<bits/stdc++.h>
using namespace std;
int i = 1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int a[n+5];
        long long int ans =0,odd=0;
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]==1)odd++;
            ans ^= a[i];
        }

       //cout<<ans<<endl;
        //cout<<odd<<endl;


        if(( odd%2 ==1 && ans == 1) || (odd< n && ans == 0))
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

