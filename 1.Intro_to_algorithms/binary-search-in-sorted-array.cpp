/*
Algorithm practice: binary search in a sorted array
*/

#include <iostream>
using namespace std;

// Analyzing time complexity of the code:
/*
binary search function = O(log n)
main function = O(1)
Total time complexity = O(log n)
*/

int binarySearch(int arr[], int n, int key) // O(log n)
{
    int low = 0, high = n - 1; // O(1)
    while (low <= high)        // O(log n)
    {
        int mid = low + (high - low) / 2; // O(1)
        if (arr[mid] == key)              // O(1)
            return mid;                   // O(1)
        else if (arr[mid] < key)          // O(1)
            low = mid + 1;                // O(1)
        else                              // O(1)
            high = mid - 1;               // O(1)
    }
    return -1; // O(1)
}

int main() // O(1)
{
    int n, key;                                                  // O(1)
    cout << "Enter the size of the array: ";                     // O(1)
    cin >> n;                                                    // O(1)
    int arr[n];                                                  // O(1)
    cout << "Enter the elements of the array in sorted order: "; // O(1)
    for (int i = 0; i < n; i++)                                  // O(n)
    {
        cin >> arr[i]; // O(1)
    }
    cout << "Enter the key to search: ";                    // O(1)
    cin >> key;                                             // O(1)
    int index = binarySearch(arr, n, key);                  // O(log n)
    if (index != -1)                                        // O(1)
        cout << "Element found at index " << index << endl; // O(1)
    else
        cout << "Element not found." << endl; // O(1)
    return 0;
}