#include<stdio.h>
void solv(int n)
{ 
    if (n==0) return;
    printf("I love Recursion\n");
    solv(n-1);
}
int main()
{ 
    int number;
    scanf("%d",&number);
    solv(number);
    
    return 0;
}