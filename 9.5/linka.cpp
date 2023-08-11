#include <iostream>

using namespace std;

// Define the Node struct
struct Node {
    int data;
    Node* next;
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head;
public:
    // Constructor
    LinkedList() {
        head = nullptr;
    }
    
    // Destructor
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
    
    // Insert a node at the beginning of the list
    void insertAtBeginning(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    // Insert a node at the end of the list
    void insertAtEnd(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        }
    }
    
    // Traverse the list and print the data of each node
    void traverse() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
};

// Test the LinkedList class
int main() {
    LinkedList list;
    list.insertAtEnd(1);
    list.insertAtEnd(2);
    list.insertAtEnd(3);
    list.insertAtBeginning(0);
    list.traverse();
    return 0;
}
