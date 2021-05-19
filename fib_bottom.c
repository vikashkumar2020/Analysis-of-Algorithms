#include <stdio.h>

int fib(int n) // a bottom up approach 
{
    int arr[n+2];
    arr[0]=0;
    arr[1]=1;

    for(int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}
int main()
{
    int n;
    printf("%s", "enter the number\n");
    scanf("%d", &n);

    printf("%d", fib(n));
    return 0;
}