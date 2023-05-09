#include<stdio.h>
void solve(int i)
{
    if(i==0) return;
     solve(i-1);
    printf("%d\n",i);

}
int main()
{   
    int number;
    scanf("%d",&number);
   solve(number);

    return 0;
}