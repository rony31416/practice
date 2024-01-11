#include<bits/stdc++.h>
using namespace std;
typedef  long long ll ;
typedef  long double ld;
typedef  vector<int> vi;
typedef vector<pair<int,int>>vpi;
typedef  pair<int,int> pi;
int i  = 0;
#define  fr(i,n)      for(int i=0;i<n;i++)
#define pb               push_back
#define  ttimes(T)    while(T--)
#define  fastio         ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define   nl            endl

int main()
{
    fastio
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[2]+a[1]<<nl;
    return 0 ;
}
