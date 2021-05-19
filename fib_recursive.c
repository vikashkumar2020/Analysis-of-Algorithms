#include<stdio.h>

int fib(int n) // a simple recursive approach
{
    if(n==0 || n==1)
    return n;

    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    printf("%s","enter the number\n");
    scanf("%d",&n);

    printf("%d",fib(n));
    return 0;
}