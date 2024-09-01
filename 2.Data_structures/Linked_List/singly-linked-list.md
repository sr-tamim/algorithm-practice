### Singly Linked list

Singly linked list is a collection of nodes where each node contains a value and a reference to the next node in the list.

```cpp
// Node class to represent a node in a singly linked list
class Node {
public:
    int data;
    Node* next;
};

// Linked list class contains all the operations that can be performed on a singly linked list
class LinkedList {
public:
    Node* head;
    LinkedList() {
        head = NULL;
    }

    // all the operations will be added here

    // Print the list
    void print() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};
```

#### Insert at Beginning
Inserting a node at the beginning of a singly linked list involves creating a new node, setting its `next` pointer to the current head, and updating the head to point to the new node.

```cpp
void insertAtBeginning(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
```
##### Time Complexity
The time complexity of inserting a node at the beginning of a singly linked list is `O(1)` because we only need to update the head pointer.

#### Insert at End
Inserting a node at the end of a singly linked list involves creating a new node and traversing the list to find the last node, then updating the last node's `next` pointer to point to the new node.

```cpp
void insertAtEnd(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
```
##### Time Complexity
The time complexity of inserting a node at the end of a singly linked list is `O(n)` in the worst case because we need to traverse the entire list to find the last node.

#### Insert at Index
Inserting a node at a specific index in a singly linked list involves creating a new node and traversing the list to find the node at the desired index, then updating the pointers to insert the new node.

```cpp
void insertAtPosition(int data, int position) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        head = newNode;
    } else {
        Node* temp = head;
        for (int i = 1; i < position - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
```
##### Time Complexity
The time complexity of inserting a node at a specific index in a singly linked list is `O(n)` in the worst case because we may need to traverse the entire list to find the node at the desired index.

#### Delete from Beginning
Deleting a node from the beginning of a singly linked list involves updating the head pointer to point to the next node in the list and freeing the memory of the deleted node.

```cpp
void deleteFirstNode() {
    if (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}
```
##### Time Complexity
The time complexity of deleting a node from the beginning of a singly linked list is `O(1)` because we only need to update the head pointer.

#### Delete from End
Deleting a node from the end of a singly linked list involves traversing the list to find the second-to-last node, updating its `next` pointer to `NULL`, and freeing the memory of the last node.

```cpp
void deleteLastNode() {
    if (head != NULL) {
        if (head->next == NULL) {
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while (temp->next->next != NULL) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = NULL;
        }
    }
}
```
##### Time Complexity
The time complexity of deleting a node from the end of a singly linked list is `O(n)` in the worst case because we may need to traverse the entire list to find the second-to-last node.

#### Delete from Index
Deleting a node from a specific index in a singly linked list involves traversing the list to find the node at the desired index, updating the pointers to remove the node, and freeing the memory of the deleted node.

```cpp
void deleteAtPosition(int position) {
    if (head != NULL) {
        if (position == 1) {
            Node* temp = head;
            head = head->next;
            delete temp;
        } else {
            Node* temp = head;
            for (int i = 1; i < position - 1; i++) {
                temp = temp->next;
            }
            Node* nodeToDelete = temp->next;
            temp->next = temp->next->next;
            delete nodeToDelete;
        }
    }
}
```
##### Time Complexity
The time complexity of deleting a node from a specific index in a singly linked list is `O(n)` in the worst case because we may need to traverse the entire list to find the node at the desired index.

#### Search
Searching for a value in a singly linked list involves traversing the list and comparing each node's value with the target value.

```cpp
bool search(int value) {
    Node* temp = head;
    while (temp != NULL) {
        if (temp->data == value) {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
```
##### Time Complexity
The time complexity of searching for a value in a singly linked list is `O(n)` in the worst case because we may need to traverse the entire list to find the target value.