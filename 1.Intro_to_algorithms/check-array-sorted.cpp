/*
Algorithm practice: checking if an array is sorted
*/

#include <iostream>
using namespace std;

// Analyzing time complexity of the code:
/*
isSorted function = O(n)
main function = O(1)
Total time complexity = O(n)
*/

bool isSorted(int arr[], int n) // O(n)
{
    for (int i = 0; i < n - 1; i++) // O(n)
    {
        if (arr[i] > arr[i + 1]) // O(1)
            return false;
    }
    return true;
}

int main() // O(1)
{
    int n;                                       // O(1)
    cout << "Enter the size of the array: ";     // O(1)
    cin >> n;                                    // O(1)
    int arr[n];                                  // O(1)
    cout << "Enter the elements of the array: "; // O(1)
    for (int i = 0; i < n; i++)                  // O(n)
    {
        cin >> arr[i]; // O(1)
    }
    if (isSorted(arr, n))                       // O(n)
        cout << "The array is sorted." << endl; // O(1)
    else
        cout << "The array is not sorted." << endl; // O(1)
    return 0;
}