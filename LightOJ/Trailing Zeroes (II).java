import java.util.*;

public class code {
    public static Scanner in = new Scanner(System.in);
     public static void main(String[] args)
     {
         long tt;
         tt = in.nextLong();
         for(int i = 1 ; i<= tt;i++)
         {

            long n,r,p,q;
            n = in.nextLong();
            r = in.nextLong();
            p = in.nextLong();
            q = in.nextLong();

            long n2 = c_num(n,2);
            long r2 = c_num(r,2);
            long n_r2 = c_num(n-r,2);
            long n5 = c_num(n,5);
            long r5 = c_num(r,5);
            long n_r5 = c_num(n-r,5);
            long p2 = prime_factor(p,2);
            long p5 = prime_factor(p,5);

            long two_c = n2-r2-n_r2+p2*q;
            long five_c = n5-r5-n_r5+p5*q;



             System.out.println("Case "+i+": "+Math.min(two_c,five_c));

           // System.out.printf("Case %lld: %lld\n",i,Math.min(two_c,five_c));



         }



     }

public static long c_num(long n , long x)
{
    int c = 0;
    while(n>0)
    {
        c+=n/x;
        n = n / x;
    }
    return c;
}
public static long prime_factor(long n,long r)
{
    long c = 0 ;
    while(n%r == 0 )
    {
        c++;
        n/=r;
    }
    return c;
 }

}
