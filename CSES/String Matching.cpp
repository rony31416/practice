#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll ;
typedef  long double            ld;
typedef  vector<ll>             vll;
typedef  vector<string>         vs;
typedef  vector<pair<int,int> >  vpi;
typedef  set<ll>                s;
typedef  map<ll,ll>             mll;
typedef  pair<int,int>          pint;
double   pi = 3.14159265359;

#define  FOR(n,v)              for(ll i=0;i<n;i++) cin>>v[i];
#define  REP(i,n)              for(int i=0;i<n;i++)
#define  pb                    push_back
#define  ttimes(T)             while(T--)
#define  fastIO                ios_base::sync_with_stdio(false);
#define  nl                    "\n";
#define  all(v)                v.begin(),v.end()
#define  sort_a(v)             sort(all(v));
#define  sort_d(v)             sort(all(v),greater<ll>() );
#define  py                    printf("YES\n");
#define  pn                    printf("NO\n");
#define  pmone                 printf("-1\n");

const int N = 100005;

int stringPatternSearch(string text,string pattern)
{
    int ans = 0;
    const int BASE = 256;
    const int MOD = 1e9 + 7;

    // pattern hash koto?
    long long pattern_hash = 0;
    for (int i = 0; i < pattern.size(); ++i)
    {
        int new_char = pattern[i] - 'a' + 1;
        pattern_hash = (pattern_hash * BASE + new_char) % MOD;
    }

    long long text_window_hash = 0;
    for (int i = 0; i < pattern.size(); ++i)
    {
        int new_char = text[i] - 'a' + 1;
        text_window_hash = (text_window_hash * BASE + new_char) % MOD;
    }

    // power = BASE^(|pattern|-1)
    long long power = 1;
    for (int i = 0; i < (int) pattern.size() - 1; ++i)
    {
        power = power * BASE % MOD;
    }

    // text er surur 3 size window ase
    for (int i = 0, j = (int) pattern.size() - 1; j < text.size(); ++i, ++j)
    {
        if (text_window_hash == pattern_hash)
        {
            ans++;
        }

        // leftmost char ta baad dite hobe
        int out_char = text[i] - 'a' + 1;
        // here power = BASE^(|pattern|-1)
        text_window_hash = (text_window_hash - out_char * power) % MOD;
        if (text_window_hash < 0) text_window_hash += MOD;

        text_window_hash = text_window_hash * BASE % MOD;

        if (j + 1 < text.size())
        {
            int in_char = text[j + 1] - 'a' + 1;
            text_window_hash = (text_window_hash + in_char) % MOD;
        }
    }

    return ans;
}



void solve()
{
    string s1,s2;
    cin>>s1>>s2;

    cout<<stringPatternSearch(s1,s2)<<nl;

}
int main()
{

    int t;
    //  cin>>t;
    for(int i = 1 ; i <= 1 ; i++)
    {
        // printf("Case %d:\n",i);
        solve();
    }
    // solve();
    return 0;
}

