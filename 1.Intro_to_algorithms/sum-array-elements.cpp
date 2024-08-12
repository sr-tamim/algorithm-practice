/*
Algorithm practice: summing elements of an array
*/

// Analyzing time complexity of the code:
/*
sumArray function = O(n)
main function = O(1)
Total time complexity = O(n)
*/

#include <iostream>
using namespace std;

int sumArray(int arr[], int n) // O(n)
{
    int sum = 0;                // O(1)
    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i]; // O(1)
    }
    return sum;
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
    cout << "Sum of elements of the array is: " << sumArray(arr, n) << endl; // O(n)
    return 0;
}