//#include<bits/stdc++.h>
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

int arr[2*N],st[4*N];

void buildtree(int si, int ss, int se)
{
    if(ss == se)
    {
        st[si] = arr[ss];
    }
    else
    {
        ll mid = (ss + se)/2;
        buildtree(2*si, ss, mid);
        buildtree(2*si+1,mid+1,se);

        st[si] = st[2*si] + st[2*si+1];
    }
}
void update(int si,int ss,int se, int qi, int val)
{
    if(ss == se)//Leaf node
    {
        st[si]= val;

    }
    else
    {
        int mid = (ss + se)/2;
        if(ss <= qi and qi <= mid)// if qi in the left child
        {
            update(2*si,ss,mid,qi,val);
        }
        else
        {
            update(2*si+1,mid+1,se,qi,val);
        }

        st[si] = st[2*si] + st[2*si + 1];
    }
}

int query(int si, int ss,int se,int l, int r)
{
    if(r < ss or se < l)
    {
        return 0;
    }
    if( l <= ss and se <= r)
    {
        return st[si];
    }
    int mid = (ss + se )/2;
    int left = query(2*si, ss, mid, l, r);
    int right = query(2*si+1, mid+1, se,l,r);
    return left+right;
}
void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i = 1 ; i <= n ; i++)
    {

        cin>>arr[i];
        //    if(a&1) arr[i] = 0;
        //    else arr[i] = 1;
        // arr[i] = a%2 == 0 ? 1 : 0;
    }
    buildtree(1,1,n);

    while(q--)
    {
        int typ,idx ;
        cin>>typ>>idx;
        if(typ == 1)
        {
            idx++;
            cout<<query(1,1,n,idx,idx)<<nl;
            arr[idx] = 0;
            update(1,1,n,idx,0);
        }
        else if(typ == 2)
        {
            int  val;
            cin>>val;
            arr[idx+1] += val;
            update(1,1,n,idx+1,arr[idx+1]);
        }
        else
        {
            int j;
            cin>>j;
            cout<<query(1,1,n,idx+1,j+1)<<nl;
        }

    }

}
int main()
{

    int t;
    cin>>t;
    for(int i = 1 ; i <= t ; i++)
    {
        printf("Case %d:\n",i);
        solve();
    }
    // solve();
    return 0;
}

Curious Robin Hood
