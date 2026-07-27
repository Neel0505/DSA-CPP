// Implementation of Doubly Linked List from scratch

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
    Node* head;
    Node* tail;
public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void push_front(int val);
    void push_back(int val);
    void display();
    void pop_front();
    void pop_back();
};

void DoublyLinkedList::push_front(int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void DoublyLinkedList::push_back(int val) {
    Node* newNode = new Node(val);
    if (tail == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::pop_front() {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    if (head != nullptr) {
        head->prev = nullptr;
    } else {
        tail = nullptr; // List is now empty
    }
    delete temp;
}

void DoublyLinkedList::display() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << "<=> ";
        temp = temp->next;
    }
    cout << "Null" << endl;
}


void DoublyLinkedList::pop_back() {
    if (tail == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = tail;
    tail = tail->prev;
    if (tail != nullptr) {
        tail->next = nullptr;
    } else {
        head = nullptr; // List is now empty
    }
    delete temp;
}
int main() {
    DoublyLinkedList dll;
    cout << "Doubly Linked List Implementation\n";
    dll.pop_back();
    dll.push_back(10);
    dll.push_back(20);
    dll.push_front(5);
    cout << "<=> ";
    dll.display(); 

    // You can implement methods to manipulate the doubly linked list here
    return 0;
}