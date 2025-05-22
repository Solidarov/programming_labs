// Черга на основі покажчиків

#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr){};
};

class Queue
{
    public:
        Node *front = nullptr;
        Node *rear = nullptr;
        int maxSize = 10;
        int size = 0;

        bool isEmpty();
        void display();
        void enqueue(int value);
        int dequeue();
};

bool Queue::isEmpty(){
    if ((front == nullptr) || (size == 0)){
        return true;
    }
    else{
        return false;
    }
}

void Queue::display(){
    cout << "Elements of queue: " << endl;
    Node *element = front;
    while (element){
        cout << element -> data << " ";
        element = element -> next;
    }
    cout << endl;
}

void Queue::enqueue(int value){
    if (size >= maxSize){
        cout << "Queue is full" << endl;
        return;
    }
    Node *newNode = new Node(value);
    if (isEmpty()){
        rear = newNode;
        front = newNode;
    }else{
        rear -> next = newNode;
        rear = newNode;
    }
    size++;
    cout << "Element " << rear -> data << " was successfully inserted" << endl;
}

int Queue::dequeue(){
    if (isEmpty()){
        cout << "The queue is empty" << endl;
        return -1;
    }
    Node* temp = front;
    int element = temp -> data;
    front = front -> next;
    delete temp;
    size--;

    if (front == nullptr){
        rear = nullptr;
    }
    cout << "Element " << element << " was successfully dequeued" << endl;
    return element;
}


int main(){
    Queue q = Queue();
    q.dequeue();
    
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);

    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    return 0;
}