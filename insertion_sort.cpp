#include <bits/stdc++.h> // header file
using namespace std;

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
    cout << "Enter the size of array"
         << "\n";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array"
         << "\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "elements of array before sorting"
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    insertion_sort(arr, n); // insertion sort function called

    cout << "\n";

    cout << "elements of array after sorting"
         << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
