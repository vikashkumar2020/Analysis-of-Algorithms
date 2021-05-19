#include <stdio.h>
int arr[1000];
int fib(int n) // a top down approach 
{
    if (n == 0 || n == 1)
        return n;
    if (arr[n] == 0)
    {
        arr[n] = fib(n - 1) + fib(n - 2);
        // return arr[n];
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