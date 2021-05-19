#include <stdio.h> // header file

void insertion_sort(int arr[], int n) // insertion sort function
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1; // indexing start with 0
        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() // main function
{
    int n;
    printf("%s", "Enter the size of array\n");
    scanf( "%d",&n);

    int arr[n];

    printf( "%s","Enter the elements of array\n");

    for (int i = 0; i < n; i++)
    {
        scanf( "%d",&arr[i]);
    }
    
    printf("%s", "elements of array before sorting\n");
    for (int i = 0; i < n; i++)
    {
        printf( "%d ",arr[i] );
    }
    
    insertion_sort(arr, n); // insertion sort function called

    printf( "%s","\n");

    printf("%s", "elements of array after sorting\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
