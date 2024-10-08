/*
Algorithm practice: finding maximum element in an array
*/

#include <iostream>
using namespace std;

// Analyzing time complexity of the code:
/*
findMax function = O(n)
main function = O(1)
Total time complexity = O(n)
*/

int findMax(int arr[], int n) // O(n)
{
    int max = arr[0];           // O(1)
    for (int i = 1; i < n; i++) // O(n)
    {
        if (arr[i] > max) // O(1)
            max = arr[i];
    }
    return max;
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
    cout << "Maximum element in the array is: " << findMax(arr, n) << endl; // O(n)
    return 0;
}