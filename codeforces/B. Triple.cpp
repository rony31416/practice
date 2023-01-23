#include<bits/stdc++.h>
using namespace std;
//double pi = 3.14159265359;

int main()
{

    int t,p;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        long long b = 0 ;
        map<long long,long long >m;
        while(n--)
        {
            long long a;
            cin>>a;
            m[a]++;
            b = max(b,m[a]);
            if(m[a] == 3)
            {
                p = a;
            }

        }
        if(b < 3) cout<<"-1"<<endl;
        else
            cout<<p<<endl;

    }



    return 0;
}
 
