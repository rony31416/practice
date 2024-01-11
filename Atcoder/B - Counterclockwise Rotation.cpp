//https://atcoder.jp/contests/abc259/tasks/abc259_b
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
   double a,b,d;
   cin>>a>>b>>d;
   double x,y;
   double r = sqrt(a*a+b*b);
   double red = 180.00/3.141592653589793238462643383279;
    if(a==0 && b == 0) 
   {
     x = a,y=b;

   	printf("%.20lf %.20lf\n",x,y);
   	return;
   }
   double pt = atan2(b,a);
   
   pt = red*pt;
   x = r*cos((d+pt)/red);
   y = r*sin((d+pt)/red);
   printf("%.20lf %.20lf\n",x,y);
	
}
int main()
{
   
    solve();	
	
	return 0;
}
