#include<bits/stdc++.h>
using namespace std;
//1000
int div(int n)
{
    int c=0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) c++;

    return c;
    // cout <<" " << i;
}
int compare(pair<int,int>x,pair<int,int>y)
{
    if(x.second<y.second)
    {
        return 1;
    }
    else if(x.second==y.second&&x.first>y.first) return 1;
    else return 0;
}
vector<pair<int,int> >p;
int main()
{
    int t,n;

    for(int j=1; j<=1000; j++)
    {
        p.push_back(make_pair(j,div(j)));
    }
    sort(p.begin(),p.end(),compare);
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        //vector<pair<int,int> >p;

        cout<<"Case "<<i<<": "<<p[n-1].first<<endl;
    }

}
