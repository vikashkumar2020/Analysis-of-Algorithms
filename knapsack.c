#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{

    if (n == 0 || W == 0)
        return 0;

    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);

    else
        return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
}

int main()
{
     int n;
    printf("%s", "Enter the length\n");
    scanf( "%d",&n);
    int val[n];
    int wt[n];

     printf( "%s","Enter the values\n");

    for (int i = 0; i < n; i++)
    {
        scanf( "%d",&val[i]);
    }

    printf( "%s","Enter the weight\n");

    for (int i = 0; i < n; i++)
    {
        scanf( "%d",&wt[i]);
    }
    int C;
    printf("%s", "Enter the Capacity\n");
    scanf( "%d",&C);
    printf("%d", knapSack(C, wt, val, n));
    return 0;
}
