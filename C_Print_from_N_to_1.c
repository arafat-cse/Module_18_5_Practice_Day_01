#include<stdio.h>

void solve(int i)
{
    if(i==0) return;
    if (i==1)
    {
         printf("%d",i); 
    }else{
         printf("%d ",i); 
    }  
    solve (i-1);
}
int main()
{   
    int number;
    scanf("%d",&number);
   solve(number);
 
    return 0;
}