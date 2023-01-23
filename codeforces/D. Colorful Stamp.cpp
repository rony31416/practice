#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t,i;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int  f = 1;
        for(int i = 0; i < n ; i++)
        {

            while(s[i] == 'W' && i < n) i++;

            if(i == n ) break;

            int bcnt = 0,rcnt = 0;
            while(s[i] != 'W' && i < n)
            {
                if(s[i] == 'R') rcnt++;
                else bcnt++;
                i++;
            }

            if(rcnt == 0 || bcnt == 0)
            {
                f = 0;
                break;
            }
        }
        cout<<(f ? "YES" : "NO")<<endl;

    }
    return 0;
}

 
