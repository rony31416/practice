#include <stdio.h>

int main()
{
    int n,ans = 0;
    int s1 = 0, s2 = 0,s3 = 0,s4 = 0 ;

    scanf("%d",&n);

    int a[n];

    for(int i = 0 ; i < n ; i++)
        {
            scanf("%d", &a[i]);
        }
    for(int i  = 0 ; i < n; i++ )
        {
            if(a[i] == 1)
                {
                    s1++;
                }
            if(a[i] == 2)
                {
                    s2++;
                }
            if(a[i] == 3)
                {
                    s3++;
                }
            if(a[i] == 4)
                {
                    s4++;
                }

        }
    ans = ans + s4;

    if(s3 != 0)
    {
            if( s3 >= s1)
            {
                ans = ans + s3;
                s1 = 0;
            }
            else
            {
                ans = ans + s3;
                s1 = s1 -s3;

            }
    }

    s2 = s2*2 + s1;
    if(s2%4 != 0)
    {
        ans = ans + ((s2 + 4 ) - ( s2%4))/4;

    }
    else
    {
        ans = ans + (s2/4);
    }

    printf("%d\n",ans);
    return 0;
}
