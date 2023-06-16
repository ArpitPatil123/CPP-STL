#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    /////////////////////// Max Heap ///////////////////////////////////////////
    priority_queue<int> maxHeap; // Max Heap

    // Pushing elements into the priority queue
    maxHeap.push(30);
    maxHeap.push(50);
    maxHeap.push(10);

    // Accessing the top element
    int topElement = maxHeap.top();
    cout << "Top element: " << topElement << endl;

    // Checking if the priority queue is empty
    bool isEmpty = maxHeap.empty();
    cout << "Is priority queue empty? " << (isEmpty ? "Yes" : "No") << endl;

    // Size of the priority queue
    int queueSize = maxHeap.size();
    cout << "Priority queue size: " << queueSize << endl;

    // Popping elements from the priority queue
    maxHeap.pop();

    // Iterating over elements (popping until empty)
    cout << "Popped elements: ";
    while (!maxHeap.empty())
    {
        int poppedElement = maxHeap.top();
        maxHeap.pop();
        cout << poppedElement << " ";
    }
    cout << endl;

    /////////////////////// Min Heap ///////////////////////////////////////////
    priority_queue<int, vector<int>, greater<int>> minHeap; // MinHeap

    // Pushing Elements in pq
    minHeap.push(10);
    minHeap.push(50);
    minHeap.push(70);
    minHeap.push(20);

    // Checking Top Element
    cout << "Top Element in the Queue is: " << minHeap.top() << endl;

    // Checking if queue is empty
    cout << "Is queue empty? " << (minHeap.empty() ? "Yes" : "No") << endl;

    // Size of the queue
    cout << "Size of minHeap queue is: " << minHeap.size() << endl;

    // Iterating over it
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    cout << "Is queue empty? " << (minHeap.empty() ? "Yes" : "No") << endl;

    /////////////////// Heap with inserted values at initialization ////////////
    vector<int> v = {10, 30, 20, 40, 23};
    auto it = next(v.begin(), 1); // Will skip the first element of the vector
    priority_queue<int, vector<int>, greater<int>> pq(it, v.end());

    // Iterating through minHeap priority queue
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    priority_queue<int> pq1(it, v.end());
    // Iterating through maxHeap priority queue
    while (!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout << endl;

    return 0;
}
