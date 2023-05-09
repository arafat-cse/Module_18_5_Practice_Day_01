#include<stdio.h>
 long long int fun(long long int a[],int n,long long int i)
{
    if(i==n) return 0;
    long long int sum =0;
    sum=fun(a,n,i+1);
   return sum+a[i];
}
int main()
{

    int n;
    scanf("%d",&n);
     long long int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&a[i]);
    }
  long long int sum=fun(a,n,0);
  printf("%lld",sum);
    
    return 0;
}