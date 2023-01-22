#include<bits/stdc++.h>
#include<stdlib.h>
#include<cmath>

using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    vector<ll>a(n,0), mod(n+5,0);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    ll cumSum=0;
    for(int i=0;i<n;i++){
            cumSum+=(a[i]%n + n) % n;
            mod[cumSum%n]++;
    }

    ll divisible=mod[0];
    for(int i=0;i<n;i++){
            divisible+=(mod[i]*(mod[i]-1))/2;
    }

    cout << divisible << "\n";

    return 0;
}
