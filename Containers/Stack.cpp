#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Accessing the top element
    int topElement = myStack.top();
    cout << "Top element: " << topElement << endl;

    // Checking if the stack is empty
    bool isEmpty = myStack.empty();
    cout << "Is stack empty? " << (isEmpty ? "Yes" : "No") << endl;

    // Size of the stack
    int stackSize = myStack.size();
    cout << "Stack size: " << stackSize << endl;

    // Popping elements from the stack
    myStack.pop();

    // Iterating over elements (popping until empty)
    cout << "Popped elements: ";
    while (!myStack.empty())
    {
        int poppedElement = myStack.top();
        myStack.pop();
        cout << poppedElement << " ";
    }
    cout << endl;

    return 0;
}
