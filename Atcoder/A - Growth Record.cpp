//https://atcoder.jp/contests/abc259/tasks/abc259_a

#include<bits/stdc++.h>
using namespace std;

#define pb  push_back

double dis(double x2,double y2)
{
	double d = sqrt(x2*x2+y2*y2);
	return d;
}

void solve()
{
   int n,m,x,t,d;
   cin>>n>>m>>x>>t>>d;
   if(x-m >0)
   {
   	  t = t - (x-m)*d;  
   }
   cout<<t<<endl;
   
	
}
int main()
{
   
    solve();	
	
	return 0;
}
