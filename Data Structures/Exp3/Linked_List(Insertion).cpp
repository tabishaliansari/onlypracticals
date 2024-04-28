#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }
    ~LinkedList(); // Destructor to free allocated memory
    void display();
    void add_to_beginning(int);
    void add_at_end(int);
    void add_at_a_node(int, int);
    void addSampleData();
};

LinkedList::~LinkedList() {
    // Destructor to free allocated memory
    Node* current = head;
    Node* next;
    while (current != NULL) {
        next = current->next;
        delete current;
        current = next;
    }
}

void LinkedList::display() {
	cout<<"The LinkedList is: ";
    Node* current = head;
    while (current != NULL) {
        cout << current->value << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void LinkedList::add_to_beginning(int d) {
    Node* newNode = new Node();
    newNode->value = d;
    newNode->next = head;
    head = newNode;
   
}

void LinkedList::add_at_end(int d) {
    Node* newNode = new Node();
    newNode->value = d;
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

void LinkedList::add_at_a_node(int value, int position) {
    if (position == 0) {
        add_to_beginning(value);
    } else {
        Node* currentNode = head;
        for (int i = 1; i < position; i++) {
            if (currentNode == NULL) {
                cerr << "Invalid position" << endl;
                return;
            }
            currentNode = currentNode->next;
        }

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }  
}

void LinkedList::addSampleData() {
	int size, a[size];
	cout<<"Enter size of LinkedList: ";
	cin>>size;
	cout<<"Enter values: "<<endl;
	for (int i=0; i<size; i++){
		cin>>a[i];
	}
	for (int i=0; i<size; i++){
		add_at_end(a[i]);
	}
}

int main() {
    LinkedList myList;

    // Sample data
    myList.addSampleData();

    myList.display();

    int choice;
    bool quit = false;


    while (!quit) {
        int num, position;
    	cout<<endl; 
        cout << "Choose from the following: " << endl;
        cout << "1. Add to beginning" << endl;
        cout << "2. Add after a given node " << endl;
        cout << "3. Add at the end of the linked list. " << endl;
        cout << "4. quit" << endl;
        cin >> choice;
        switch (choice) {
        case 1:
        	cout << "Enter the number you want to add: ";
    		cin >> num;
            myList.add_to_beginning(num);
            myList.display();
            break;
        case 2:
        	cout << "Enter the number you want to add: ";
    		cin >> num;
        	cout << "Enter position: ";
        	cin >> position;
            myList.add_at_a_node(num, position);
            myList.display();
            break;
        case 3:
        	cout << "Enter the number you want to add: ";
    		cin >> num;
            myList.add_at_end(num);
            myList.display();
            break;
        case 4:
            quit = true;
            break;
        default:
            cout << "That is not a valid input, quitting program";
            quit = true;
        }
    }

    return 0;
}

