#include<bits/stdc++.h>
using namespace std;
#define  nl                    "\n";
void solve()
{
    vector<pair<int,int> > v;
    char c[8][8];
    string s = "";
    int b = 0, r = 0;
    for(int i = 0 ; i< 8 ; i++ )
    {
        for(int j = 0 ;  j < 8 ; j ++ )
        {
            cin>>c[i][j];
        }
    }
    for(int i = 0 ; i  < 8 ; i++ )
    {
        for(int  j = 0 ; j < 8 ; j ++)
        {
            if(c[i][j] == 'R')
                r++;

        }
        if(r == 8 )
        {
            cout<<"R"<<nl;
            return;
        }
        else r = 0;
    }

    // int b = 0;
    for(int i = 0 ; i  < 8 ; i++ )
    {
        for(int  j = 0 ; j < 8 ; j ++)
        {
            if(c[j][i] == 'B')
                b++;

        }
        if(b == 8 )
        {
            cout<<"B"<<nl;
            return;
        }
        else b = 0;
    }
}


int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
