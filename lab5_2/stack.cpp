// Стек на основі масиву
#include <iostream>
using namespace std;

class Stack
{
public:
    int array[10] = {0};
    int top = -1;
    int size = 0;

    bool isEmpty();
    void display();
    void push(int value);
    int pop();
};

bool Stack::isEmpty(){
    if ((top == -1) || (size == 0)){
        return true;
    }
    else{
        return false;
    }
}

void Stack::display(){
    cout << "Elements of the stack:\n" << endl;
    for (int item: array){
        cout << item << " ";
    }
    cout << endl;
}

void Stack::push(int value){
    if ((top < 9) && (size <= 9)){
        top++;
        size++;
        array[top] = value;
        cout << "Element " << array[top] << " was successfully inserted" << endl;
    }
    else{
        cout << "No more space." << endl;
    }
}

int Stack::pop(){
    if ((top > -1) && (size > 0)){
        int top_element = array[top]; 
        top--;
        size--;
        cout << "Top element " << top_element << " was successfully poped from stack" << endl;
        return top_element;
    }
    else{
        cout << "Cannot pop element from the empty stack" << endl;
        return -1;
    }
}


int main(){
    Stack s = Stack();

    s.pop();

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.push(9);
    s.push(10);
    s.push(11);

    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    return 0;
}