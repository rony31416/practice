#include <bits/stdc++.h>
using namespace std;

int main ()
{
  long long int n, x, i, b, temp, sum = 0;

    scanf("%lld %lld", &n, &x);

  long long  int c[n];
        for (i = 0; i < n; i ++)
        {
            scanf("%lld", &c[i]);
        }
        sort(c,c+n);
        for (i = 0; i < n; i ++)
        {
            sum = sum + c[i] * x;
            if (x > 1)
            {
                x --;
            }
        }

        printf("%lld\n", sum);


    return 0;
}
 
