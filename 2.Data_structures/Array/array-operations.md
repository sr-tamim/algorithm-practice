### Array Operations

#### Insertion
Inserting an element into an array involves adding a new element at a specific index. This operation may require shifting existing elements to make space for the new element.

```cpp
// boilerplate code for array operations
#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;

    // Insertion, deletion, and other operations here

    printArray(arr, size);
    return 0;
}
```

##### Insert at Beginning
To insert an element at the beginning of an array, we need to shift all existing elements to the right and place the new element at index 0.

```cpp
void insertAtBeginning(int arr[], int& size, int element) {
    // Shift elements to the right
    for (int i = size - 1; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the beginning
    arr[0] = element;
    size++;
}
```
###### Time Complexity
The time complexity of inserting an element at the beginning of an array is `O(n)` because we need to shift all existing elements to the right by one position.


##### Insert at End
To insert an element at the end of an array, we can directly place the new element at the last index.

```cpp
void insertAtEnd(int arr[], int& size, int element) {
    arr[size] = element;
    size++;
}
```
###### Time Complexity
The time complexity of inserting an element at the end of an array is `O(1)` because we can directly place the new element at the last index without shifting any elements.

##### Insert at Index
To insert an element at a specific index, we need to shift elements to the right starting from the last element up to the desired index.

```cpp
void insertAtIndex(int arr[], int& size, int element, int index) {
    // Shift elements to the right
    for (int i = size - 1; i >= index; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the new element at the specified index
    arr[index] = element;
    size++;
}
```
###### Time Complexity
The time complexity of inserting an element at a specific index in an array is `O(n)` because we need to shift elements to the right starting from the last element up to the desired index.

#### Deletion
Deleting an element from an array involves removing an element at a specific index. This operation may require shifting existing elements to fill the gap created by the deletion.

##### Delete from Beginning
To delete an element from the beginning of an array, we need to shift all elements to the left starting from index 1.

```cpp
void deleteFromBeginning(int arr[], int& size) {
    // Shift elements to the left
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }

    size--;
}
```
###### Time Complexity
The time complexity of deleting an element from the beginning of an array is `O(n)` because we need to shift all elements to the left by one position.

##### Delete from End
To delete an element from the end of an array, we can simply reduce the size of the array.

```cpp
void deleteFromEnd(int arr[], int& size) {
    arr[size - 1] = 0; // Optional: Set the last element to 0
    size--;
}
```
###### Time Complexity
The time complexity of deleting an element from the end of an array is `O(1)` because we can directly reduce the size of the array without shifting any elements.

##### Delete from Index
To delete an element from a specific index, we need to shift elements to the left starting from the next index up to the end of the array.

```cpp
void deleteFromIndex(int arr[], int& size, int index) {
    // Shift elements to the left
    for (int i = index + 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }

    size--;
}
```
###### Time Complexity
The time complexity of deleting an element from a specific index in an array is `O(n)` because we need to shift elements to the left starting from the next index up to the end of the array.

#### Search
Searching for an element in an array involves iterating through the array and comparing each element with the target value.

```cpp
int searchElement(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i; // Return the index of the element if found
        }
    }
    return -1; // Return -1 if element is not found
}
```
###### Time Complexity
The time complexity of searching for an element in an array is `O(n)` in the worst case because we may need to iterate through all elements to find the target value.