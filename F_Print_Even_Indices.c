// #include<stdio.h>

// int main()
// {

//     int n;
//     scanf("%d",&n);
//     long long int arr[n];
//     for (long long int  i = 0; i < n; i++)
//     {
//       scanf("%d",&arr[i]);
//     }
//     for (long long int i = n-1; i >=0; i--)
//     {
//       if (i%2!=0)
//       {
//          i--;
//       }
//        printf("%ld ",arr[i]); 

//     }  
//     return 0;
// }
#include<stdio.h>

int main()
{

    int n;
    scanf("%d",&n);
    long long int arr[n];
    for (long long int  i = 0; i < n; i++)
    {
      scanf("%lld",&arr[i]);
    }
    for (long long int i = n-1; i >=0; i--)
    {
      if (i%2==0)
      {
          printf("%lld ",arr[i]); 
      }
       

    }
    return 0;
}