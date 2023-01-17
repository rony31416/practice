
void solve()
{
   int a[4];
   for(int i = 0 ; i< 3 ;i++)
   {
       cin>>a[i];
   }
   sort(a,a+3);
   if(a[0] + a[1] == a[2])
   {
       cout<<"YES"<<nl;
   }
   else{
    cout<<"NO"<<nl;
   }
}
