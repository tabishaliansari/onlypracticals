#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Function to insert a node at the end of the linked list
    void insert(int value) {
        Node* newNode = new Node(value);
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

    // Function to delete a node with a given value from the linked list
    void deleteNode(int value) {
        if (head == NULL) {
            cout << "List is empty. Cannot delete.\n";
            return;
        }

        Node* temp = head;
        Node* prev = NULL;

        // If the node to be deleted is the head
        if (temp != NULL && temp->data == value) {
            head = temp->next;
            delete temp;
            cout << "Node with value " << value << " deleted.\n";
            return;
        }

        // Search for the node to be deleted
        while (temp != NULL && temp->data != value) {
            prev = temp;
            temp = temp->next;
        }

        // If the node was not found
        if (temp == NULL) {
            cout << "Node with value " << value << " not found.\n";
            return;
        }

        // Unlink the node from the linked list
        prev->next = temp->next;
        delete temp;
        cout << "Node with value " << value << " deleted.\n";
    }

    // Function to traverse and print the linked list
    void traverse() {
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
};

int main() {
    LinkedList myList;

    // Insert nodes
    myList.insert(1);
    myList.insert(2);
    myList.insert(3);
    myList.insert(4);

    // Traverse and print the linked list
    myList.traverse();

    // Delete a node
    myList.deleteNode(3);

    // Traverse and print the modified linked list
    myList.traverse();

    return 0;
}

