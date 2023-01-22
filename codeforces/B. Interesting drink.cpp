#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int q,c = 0 ;
    int item;
    cin>>n;
    int left = 0,right = n-1,middle;
    int ar[n];
    for(int i = 0 ; i < n; i++)
    {
        cin>>ar[i];
    }
    sort (ar,ar +n);
    cin>>q;
    for(i = 0 ; i < q; i++)
    {
        cin>>item;
        cout<<upper_bound(ar,ar+n,item) -ar<<endl;
    }
    return 0;
}
