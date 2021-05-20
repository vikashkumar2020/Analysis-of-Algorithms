#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

  int knap(int W, int wt[], int val[], int n,int k[][W+1])
{
    if(n<0)
    return 0;

    if (k[n][W] != -1)
        return k[n][W];

    if (wt[n] > W) {
 
        k[n][W] = knap(W,wt,val,n-1,k);
      return k[n][W];
    }
    else
    {
        k[n][W] = max(val[n]
                      + knap(W - wt[n],
                                   wt, val,
                                   n - 1, k),
                       knap(W, wt, val,
                                   n - 1, k));
 
        return k[n][W];
    }
 
}

int knapSack(int W, int wt[], int val[], int n)
{
    int K[n + 1][W + 1];
     for (int i = 0; i < n+1; i++)
        for (int j = 0; j < W + 1; j++)
            K[i][j] = -1;
    return knap(W,wt,val,n,K);
}


int main()
{
    int n;
    printf("%s", "Enter the length\n");
    scanf("%d", &n);
    int val[n];
    int wt[n];

    printf("%s", "Enter the values\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val[i]);
    }

    printf("%s", "Enter the weight\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &wt[i]);
    }
    int C;
    printf("%s", "Enter the Capacity\n");
    scanf("%d", &C);
    printf("%d", knapSack(C, wt, val, n));
    return 0;
}
