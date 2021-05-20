#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int knapSack(int W, int wt[], int val[], int n)
{

    int K[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]],
                              K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }

    return K[n][W];
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
