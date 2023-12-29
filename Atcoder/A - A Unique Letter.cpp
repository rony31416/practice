//https://atcoder.jp/contests/abc260/tasks/abc260_a
#include<bits/stdc++.h>
using namespace std;

typedef  long long int          ll ;
double   pi = 3.14159265359;
#define  nl                    "\n";
void solve()
{
	int ar[26]= {0};
	string s;
	cin>>s;
	for(int i = 0 ; i < 3; i++)
	{

		int k = s[i] - 'a';
		ar[k]++;
	}
	int p = 0;

	for(int i = 0; i < 26; i++)
	{
		if(ar[i] != 0)p++;
	}
	if(p == 3) cout<<s[0];
	else if(p == 1) cout<<-1;
	else
	{
		for(int i = 0 ; i< 26 ; i++)
		{
			if(ar[i]==1)
				cout<<char(i+'a');
		}
	}




}
int main()
{

	int t;

	solve();

	return 0;

}