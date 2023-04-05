#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<pair<int, int>> vpi;
typedef set<ll> s;
typedef map<ll, ll> mll;
typedef pair<int, int> pint;
double pi = 3.14159265359;

#define FOR(n, v)              \
    for (ll i = 0; i < n; i++) \
        cin >> v[i];
#define REP(i, n) for (int i = 0; i < n; i++)
#define pb push_back
#define ttimes(T) while (T--)
#define fastIO ios_base::sync_with_stdio(false);
#define nl "\n";
#define all(v) v.begin(), v.end()
#define sort_a(v) sort(all(v));
#define sort_d(v) sort(all(v), greater<ll>());
#define py printf("YES\n");
#define pn printf("NO\n");
#define pmone printf("-1\n");

const ll N = 50005;

ll arr[2 * N], st[4 * N];

void buildtree(int si, int ss, int se)
{
    if (ss == se)
    {
        st[si] = arr[ss];
    }
    else
    {
        ll mid = (ss + se) / 2;
        buildtree(2 * si, ss, mid);
        buildtree(2 * si + 1, mid + 1, se);

        st[si] = max(st[2 * si] , st[2 * si + 1]);
    }
}
void update(int si, int ss, int se, int qi, int val)
{
    if (ss == se) // Leaf node
    {
        st[si] = val;
    }
    else
    {
        int mid = (ss + se) / 2;
        if (ss <= qi and qi <= mid) // if qi in the left child
        {
            update(2 * si, ss, mid, qi, val);
        }
        else
        {
            update(2 * si + 1, mid + 1, se, qi, val);
        }

        st[si] = max(st[2 * si],st[2 * si + 1]);
    }
}

ll query(int si, int ss, int se, int l, int r)
{
    if (r < ss or se < l)
    {
        return (INT_MIN*N);
    }
    if (l <= ss and se <= r)
    {
        return st[si];
    }
    int mid = (ss + se) / 2;
    ll left = query(2 * si, ss, mid, l, r);
    ll right = query(2 * si + 1, mid + 1, se, l, r);
    return max(left,right);
}
void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    buildtree(1, 1, n);
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<query(1,1,n,l,r)<<nl;
    }
}
int main()
{

    int t;
    bool cs = true;
    cs = false;
    if (cs)
    {
        cin >> t;
        for (int i = 1; i <= t; i++)
        {
            printf("Case %d:\n", i);
            solve();
        }
    }

    else solve();


    return 0;
}

