#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }

    void push(int x) {
        Node* temp = new Node;
        temp->data = x;
        temp->next = top;
        top = temp;
    }

    void pop() {
        if (top == NULL) {
            cout << "Stack is empty!!!" << endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    int getTop() {
        if (top == NULL) {
            cout << "Stack is empty!!!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {

    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);

    cout << stack.getTop() << endl;
    stack.pop();

    cout << stack.getTop() << endl;
    stack.pop();
    cout << stack.getTop() << endl;
    stack.pop();

    stack.pop();

    return 0;
}

