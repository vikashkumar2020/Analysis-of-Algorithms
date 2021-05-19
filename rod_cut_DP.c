#include <stdio.h>

int max(int a, int b) 
{ 
    return (a > b) ? a : b; 
}

int cutRod(int price[], int n)
{
   int val[n+1];
   val[0] = 0;
   for (int i = 1; i<=n; i++)
   {
       int max_val = -1;
       
       for (int j = 0; j < i; j++)
         max_val = max(max_val, price[j] + val[i-j-1]);
       val[i] = max_val;
   }
 
   return val[n];
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
