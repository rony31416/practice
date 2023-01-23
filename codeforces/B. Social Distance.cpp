#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//double pi = 3.14159265359;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[n+10],sum = 0;
        for(int i = 0 ; i< n ; i++) cin>>a[i];

        sort(a,a+n);
        a[n] = a[0];

        for(int i = 0 ; i< n ; i++)
            sum+=max(a[i],a[i+1]);
        sum+=n;
        cout<<(sum<= m ? "YES\n" : "NO")<<endl;
    }
    return 0;
}
 
