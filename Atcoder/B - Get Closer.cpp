//https://atcoder.jp/contests/abc246/tasks/abc246_b
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    double d;
    cin>>a>>b;
    d = sqrt(a*a+b*b);
    printf("%.10lf %.10lf",(a*1.0)/d,(b*1.0)/d);

    return 0;
}
