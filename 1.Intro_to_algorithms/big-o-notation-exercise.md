## Big O Notation Exercise

#### Question 1:
Find maximum element from an array of integers. What is the time complexity of your algorithm?
```cpp
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
```
##### Analayzing the code:
- The function `findMax` takes an array `arr` and its size `n` as input.
- It initializes a variable `max` to the first element of the array.
- It then iterates through the array to find the maximum element.
- The time complexity of this algorithm is $O(n)$, where $n$ is the size of the input array.

#### Question 2:
Sum of all elements in an array of integers. What is the time complexity of your algorithm?
```cpp
int sumArray(int arr[], int n) // O(n)
{
    int sum = 0;                // O(1)
    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i]; // O(1)
    }
    return sum;
}
```

##### Analayzing the code:
- The function `sumArray` takes an array `arr` and its size `n` as input.
- It initializes a variable `sum` to zero.
- It then iterates through the array to calculate the sum of all elements.
- The time complexity of this algorithm is $O(n)$, where $n$ is the size of the input array.

#### Question 3:
Check if an array of integers is sorted in ascending order. What is the time complexity of your algorithm?
```cpp
bool isSorted(int arr[], int n) // O(n)
{
    for (int i = 0; i < n - 1; i++) // O(n)
    {
        if (arr[i] > arr[i + 1]) // O(1)
            return false;
    }
    return true;
}
```

##### Analayzing the code:
- The function `isSorted` takes an array `arr` and its size `n` as input.
- It iterates through the array to check if each element is greater than the next element.
    - If it finds a pair of elements that are out of order, it returns `false`.
    - else, it returns `true`.
- The time complexity of this algorithm is $O(n)$, where $n$ is the size of the input array.

#### Question 4:
Search for a given element in an array of integers using binary search. What is the time complexity of your algorithm?
```cpp
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
```

##### Analayzing the code:
- The function `binarySearch` takes an array `arr`, its size `n`, and a key to search for as input.
- It initializes two variables `low` and `high` to the start and end of the array, respectively.
- It then performs a binary search to find the key in the array.
- The time complexity of this algorithm is $O(\log n)$, where $n$ is the size of the input array.