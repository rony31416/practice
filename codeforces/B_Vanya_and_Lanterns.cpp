#include<bits/stdc++.h>
using namespace std;

void solve()  {
     int n,l;
     cin>>n>>l;
     vector<int> v(n);
     vector<double> dis;
     for(int i = 0 ; i < n ; i++) {
        cin>>v[i];
     }
     sort(v.begin(),v.end());
     //cout<<"\n";
     dis.push_back(v[0] - 0);
     dis.push_back(l - v[n-1]);
     for(int i = 0 ; i < n-1 ; i++)
     {
        int d = v[i+1] - v[i];
        dis.push_back((double)d/2);
     }
     sort(dis.begin(),dis.end());
     printf("%.10lf\n",dis.back());

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
