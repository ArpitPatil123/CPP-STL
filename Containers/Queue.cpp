#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> myQueue;

    // Pushing elements into the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    // Accessing the front and back elements
    int frontElement = myQueue.front();
    int backElement = myQueue.back();
    cout << "Front element: " << frontElement << endl;
    cout << "Back element: " << backElement << endl;

    // Checking if the queue is empty
    bool isEmpty = myQueue.empty();
    cout << "Is queue empty? " << (isEmpty ? "Yes" : "No") << endl;

    // Size of the queue
    int queueSize = myQueue.size();
    cout << "Queue size: " << queueSize << endl;

    // Popping elements from the queue
    myQueue.pop();

    // Iterating over elements (popping until empty)
    cout << "Popped elements: ";
    while (!myQueue.empty())
    {
        int poppedElement = myQueue.front();
        myQueue.pop();
        cout << poppedElement << " ";
    }
    cout << endl;

    cout << "Is queue empty? " << (myQueue.empty() ? "Yes" : "No") << endl;

    return 0;
}
