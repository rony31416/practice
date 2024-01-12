//https://atcoder.jp/contests/abc221/tasks/abc221_b?lang=en
#include <stdio.h>
#include <string.h>

int main ()
{
    char S[101], T[101];
    int i, x = 0, temp;

    gets(S);
    gets(T);

    if (strlen(S) == strlen(T) && strlen(S) >= 2 && strlen(T) && strlen(S) <= 100 && strlen(T) <= 100)
    {
        for (i = 0; i < S[i] != '\0'; i ++)
        {
            if (S[i] != T[i])
            {
                temp = T[i];
                T[i] = T[i+1];
                T[i+1] = temp;
                break;
            }

        }

        if (!(strcmp(S, T)))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
