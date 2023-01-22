#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[3]= {'x','y','z'};
    int p = 0,q = 0,r = 0 ;

    int num;
    char in[3][3];
    for(int i = 0 ; i< 3; i++) cin>>in[i];
    cin>>num;

    for(int i = 0 ; i < 3 ; i++)
    {
            for(  int j  = 0 ; j<3 ; j++)
            {
                    if( j == 0)
                    {
                                 if(  in[i][j] == 'x') p = p + 100;
                            else if(  in[i][j] == 'y') q = q+100;
                            else if(  in[i][j] == 'z') r = r+100;

                    }
                    else  if( j == 1)
                    {
                                 if(  in[i][j] == 'x') p =p +10;
                            else if(  in[i][j] == 'y') q = q+10;
                            else if(  in[i][j] == 'z') r = r+10;

                    }
                    if( j == 2)
                    {
                                 if(  in[i][j] == 'x') p++;
                            else if(  in[i][j] == 'y') q++;
                            else if(  in[i][j] == 'z') r++;

                    }

            }
    }

    int i = 0, j = 0, k = 0,m = 0, n = 0  ;

    for( i = 1 ; i <= 9 ; i++)
    {
            for( j = 1 ; j <= 9 ; j ++ )
            {
                    for(k = 1 ; k <= 9 ; k++)
                    {
                            if((p*i+q*j+r*k)%num == 0)
                            {
                                m = i;
                                n = j;
                                i =  10;
                                j = 10;
                                break;
                            }

                    }
            }
    }


    string s[3];
    int lol[3];
    int summ=0;

    for(int i = 0 ; i< 3 ; i++)
    {
            for(int j = 0 ; j < 3 ; j++)
            {
                         if(in[i][j] == 'x') s[i]+= to_string(m);
                    else  if(in[i][j] == 'y') s[i]+= to_string(n);
                    else  if(in[i][j] == 'z') s[i]+= to_string(k);

            }

        lol[i] = stoi(s[i]);
        summ +=lol[i];
    }

    if( (lol[0] > 99 && lol[0] <=  999) && (lol[1] > 99 && lol[1] <=  999) && (lol[2] > 99 && lol[2] <=  999) && summ == num )
    {
        cout<<lol[0]<<endl;
        cout<<lol[1]<<endl;
        cout<<lol[2]<<endl;
    }
    else
        cout<<"-1"<<endl;


    return 0 ;
}
