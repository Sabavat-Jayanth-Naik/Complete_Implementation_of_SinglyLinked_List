# Complete_Implementation_of_SinglyLinked_List
---

# Singly Linked List Implementation in C++

## Overview

This C++ program demonstrates the implementation of a singly linked list. A singly linked list is a data structure that consists of a sequence of nodes, where each node stores a data element and a reference (or link) to the next node in the sequence. The program allows you to perform various operations on the linked list, including appending nodes, prepending nodes, inserting nodes at specific positions, deleting nodes by key, updating node values by key, and displaying the list.

## How to Use

1. Compile the program using a C++ compiler (e.g., g++).

    ```bash
    g++ -o linked_list main.cpp
    ```

2. Run the executable.

    ```bash
    ./linked_list
    ```

3. Follow the on-screen menu to perform various operations on the singly linked list.

## Implementation Details

### Node Class

The `Node` class represents a node in the singly linked list. Each node contains the following attributes:

- `data`: An integer that stores the data value of the node.
- `key`: An integer that serves as a unique identifier/key for the node.
- `next`: A pointer to the next node in the list.

### SinglyLinkedList Class

The `SinglyLinkedList` class represents the singly linked list data structure. It contains the following functions:

1. `Nodeexists(int k)`: This function checks if a node with the given key `k` exists in the list. It returns a pointer to the node if found or `NULL` if not found.

2. `appendNode(Node *n)`: Appends a new node to the end of the list. It checks for duplicate keys before appending.

3. `nodePrepend(Node *n)`: Prepends a new node to the beginning of the list. It checks for duplicate keys before prepending.

4. `insertNodeAt(int k, Node *n)`: Inserts a new node after the node with the key `k`. It checks if the node with key `k` exists before insertion.

5. `display()`: Displays the contents of the linked list.

6. `deleteNode(int k)`: Deletes a node with the key `k` from the list. It handles cases where the node to be deleted is the head node or is located elsewhere in the list.

7. `updateNode(int k, int d)`: Updates the value of a node with the key `k` to the new value `d`.

## Example Usage

1. Append a Node:
   - Enter a unique key and a value for the new node. The node will be appended to the end of the list.

2. Prepend a Node:
   - Enter a unique key and a value for the new node. The node will be prepended to the beginning of the list.

3. Insert a Node at a Place:
   - Enter the key after which you want to insert the new node, as well as a unique key and a value for the new node. The new node will be inserted after the node with the specified key.

4. Delete a Node by Key:
   - Enter the key of the node you want to delete. If the node is found, it will be deleted from the list.

5. Update a Node's Value by Key:
   - Enter the key of the node you want to update and the new value. If the node is found, its value will be updated.

6. Display the List:
   - Choose this option to view the current state of the linked list.

7. Exit:
   - Choose this option to exit the program.

## Note

- The program checks for duplicate keys when appending or prepending nodes. Each node's key should be unique within the list to avoid conflicts.

---
