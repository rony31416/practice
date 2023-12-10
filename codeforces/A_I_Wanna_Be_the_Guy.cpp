#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int p;
    cin >> p;
    set<int> s;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
    }

    if (s.size() == n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
}
int main()
{

    int T = 1;
    // cin>>T;
    while (T--)
    {
        solve();
    }

    return 0;
}
