// Implementation of Circular Linked List from scratch

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class CircularLinkedList {
    Node* head;
    Node* tail;
public:
    CircularLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val);
    void push_back(int val);
    void display();
    void pop_front();
    void pop_back();
};

void CircularLinkedList::push_front(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
        newNode->next = head; // Point to itself
    } else {
        newNode->next = head;
        head = newNode;
        tail->next = head; // Update tail's next to new head
    }
}

void CircularLinkedList::push_back(int val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
        newNode->next = head; // Point to itself
    } else {
        tail->next = newNode;
        tail = newNode;
        tail->next = head; // Update tail's next to head
    }
}

void CircularLinkedList::display() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " => ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void CircularLinkedList::pop_front() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    if (head == tail) { // Only one node
        delete head;
        head = nullptr;
        tail = nullptr;
    } else {
        Node* temp = head;
        head = head->next;
        tail->next = head; // Update tail's next to new head
        delete temp;
    }
}

void CircularLinkedList::pop_back() {
    if (tail == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    if (head == tail) { // Only one node
        delete tail;
        head = nullptr;
        tail = nullptr;
    } else {
        Node* temp = head;
        while (temp->next != tail) {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        tail->next = head; // Update tail's next to head
    }
}



int main() {
    CircularLinkedList cll;
    cll.push_back(1);
    cll.push_back(2);
    cll.push_back(3);
    cll.display(); // Output: 1 2 3

    cll.pop_front();
    cll.display(); // Output: 2 3

    cll.pop_back();
    cll.display(); // Output: 2

    return 0;
}