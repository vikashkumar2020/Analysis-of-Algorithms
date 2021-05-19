#include <stdio.h>

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
}

int cutRod(int price[], int n)
{
    if (n <= 0)
        return 0;

    int max_val = -1;

    for (int i = 0; i < n; i++)
        max_val = max(max_val, price[i] + cutRod(price, n - i - 1));
   // printf("%d ",max_val);
    return max_val;
}

int main()
{
    int n;
    printf("%s", "Enter the length\n");
    scanf( "%d",&n);

    int arr[n];

    printf( "%s","Enter the price of array\n");

    for (int i = 0; i < n; i++)
    {
        scanf( "%d",&arr[i]);
    }

    //int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum Value = %d", cutRod(arr, n));
    
    return 0;
}
