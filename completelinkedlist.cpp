#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    int key;
    Node *next;
    Node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    Node(int k, int d)
    {
        key = k;
        data = d;
        next = NULL;
    }
};

class SinglyLinkedList
{
public:
    Node *head;
    SinglyLinkedList()
    {
        head = NULL;
    }

    Node *Nodeexists(int k)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->key == k)
                return temp;
            temp = temp->next;
        }
        return NULL;
    }

    void appendNode(Node *n)
    {
        if (Nodeexists(n->key))
        {
            cout << "! Key already exists. Try another key for the data " << n->key << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                cout << "Node appended" << endl;
            }
            else
            {
                Node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                cout << "Node appended" << endl;
            }
        }
    }

    void nodePrepend(Node *n)
    {
        if (Nodeexists(n->key))
        {
            cout << "! Key already exists. Try another key for the data " << n->key << endl;
        }
        else
        {
            n->next = head;
            head = n;
            cout << "Node Prepended" << endl;
        }
    }

    void insertNodeAt(int k, Node *n)
    {
        Node *ptr = Nodeexists(k);
        if (ptr == NULL)
            cout << "No node found with given key " << k << endl;
        else
        {
            n->next = ptr->next;
            ptr->next = n;
            cout << "Node inserted at given place." << endl;
        }
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {   cout<<"|Key:";
            cout<<temp->key<<"|";
            cout<<"value:";
            cout << temp->data << "|->";
            temp = temp->next;
        }
        cout << "X" << endl;
    }

    void deleteNode(int k)
    {
        if (head == NULL)
        {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }

        if (k == head->key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            cout << "Node deleted with key " << k << endl;
            return;
        }

        Node *prev = NULL;
        Node *current = head;

        while (current != NULL && current->key != k)
        {
            prev = current;
            current = current->next;
        }

        if (current == NULL)
        {
            cout << "No node found with key " << k << endl;
        }
        else
        {
            prev->next = current->next;
            delete current;
            cout << "Node deleted with key " << k << endl;
        }
    }

    void updateNode(int k, int d)
    {
        Node *ptr = Nodeexists(k);
        if (ptr)
        {
            int prevData = ptr->data;
            ptr->data = d;
            cout << "Value updated " << prevData << " to " << ptr->data << " for key " << k << endl;
        }
        else
        {
            cout << "No node exists with the given key " << k << endl;
        }
    }
};

int main()
{
    SinglyLinkedList l1;
    int choice;
    int k, key, value;
    do
    {
        cout << "\t Menu\t" << endl;
        cout << "1. To append a node" << endl;
        cout << "2. To prepend a node" << endl;
        cout << "3. To insert a node at a place" << endl;
        cout << "4. To delete a node with key" << endl;
        cout << "5. To update a node's value using key" << endl;
        cout << "6. To display the list" << endl;
        cout << "Enter 0 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        Node *n1 = new Node();
        switch (choice)
        {
        case 1:
            cout << "Enter the key (must be unique!), value: ";
            cin >> key >> value;
            n1->key = key;
            n1->data = value;
            l1.appendNode(n1);
            break;
        case 2:
            cout << "Enter the key (must be unique!), value: ";
            cin >> key >> value;
            n1->key = key;
            n1->data = value;
            l1.nodePrepend(n1);
            break;
        case 3:
            cout << "Enter the key at which it needs to be inserted: ";
            cin >> k;
            cout << "Enter the key (must be unique!), value: ";
            cin >> key >> value;
            n1->key = key;
            n1->data = value;
            l1.insertNodeAt(k, n1);
            break;
        case 4:
            cout << "Enter the key to delete: ";
            cin >> k;
            l1.deleteNode(k);
            break;
        case 5:
            cout << "Enter the key, new value to update: ";
            cin >> k >> value;
            l1.updateNode(k, value);
            break;
        case 6:
            l1.display();
            break;
        case 0:
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    } while (choice != 0);
}

   
