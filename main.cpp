#include <iostream>
#include "Node.h"

using namespace std;

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);


    cout << "Queue front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();

    cout << "Queue front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();

    cout << "Queue front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    cout << "Queue front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    cout << "Queue front element: " << q.top() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    q.dequeue();

    return 0;
}

