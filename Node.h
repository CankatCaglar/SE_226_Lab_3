#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

class Queue {
private:
    Node* front; // Create front Node
    Node* back;  // Create back Node
    int length;  // And length of the queue

public:
    Queue() {
        this->front = nullptr;
        this->back = nullptr;
        this->length = 0;
    }


    void enqueue(int data) {
        Node* newNode = new Node(data);

        if (back == nullptr) {
            front = newNode;
            back = newNode;
        }
        else {
            back->next = newNode;
            back = newNode;
        }

        length++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        Node* temp = front;

        if (front == back) {
            front = nullptr;
            back = nullptr;
        }
        else {
            front = front->next;
        }

        delete temp;
        length--;
    }

    // I implemented top function
    int top() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return front->data;
    }
    // I implemented isEmpty function
    bool isEmpty() {
        return front == nullptr;
    }

    // I implemented size function
    int size() {
        return length;
    }
};



