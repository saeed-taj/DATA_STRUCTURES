#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) : data(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
public:
    Node* head;

    DoublyLinkedList() : head(nullptr) {}

    // Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        if (head) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    // Insert at specific position (1-based)
    void insertAtPosition(int pos, int val) {
        if (pos <= 0) {
            cout << "Invalid position.\n";
            return;
        }

        if (pos == 1) {
            insertAtBeginning(val);
            return;
        }

        Node* newNode = new Node(val);
        Node* temp = head;
        int count = 1;

        while (temp && count < pos - 1) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position out of range.\n";
            delete newNode;
            return;
        }

        newNode->next = temp->next;
        if (temp->next)
            temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;
    }

    // Delete from beginning
    void deleteFromBeginning() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        head = head->next;
        if (head)
            head->prev = nullptr;

        delete temp;
    }

    // Delete from specific position (1-based)
    void deleteFromPosition(int pos) {
        if (!head || pos <= 0) {
            cout << "Invalid operation.\n";
            return;
        }

        if (pos == 1) {
            deleteFromBeginning();
            return;
        }

        Node* temp = head;
        int count = 1;

        while (temp && count < pos) {
            temp = temp->next;
            count++;
        }

        if (!temp) {
            cout << "Position out of range.\n";
            return;
        }

        if (temp->prev)
            temp->prev->next = temp->next;
        if (temp->next)
            temp->next->prev = temp->prev;

        delete temp;
    }

    // Display list
    void display() {
        Node* temp = head;
        cout << "List: ";
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};


int main() {
    DoublyLinkedList dll;

    dll.insertAtBeginning(10);
    dll.insertAtBeginning(20);
    dll.insertAtBeginning(30);
    dll.display();  // 30 <-> 20 <-> 10

    dll.insertAtPosition(2, 25);
    dll.display();  // 30 <-> 25 <-> 20 <-> 10

    dll.deleteFromBeginning();
    dll.display();  // 25 <-> 20 <-> 10

    dll.deleteFromPosition(2);
    dll.display();  // 25 <-> 10

    return 0;
}
