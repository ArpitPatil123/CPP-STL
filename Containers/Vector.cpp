#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Accessing elements
    int element = numbers[2];
    int firstElement = numbers.front();
    int lastElement = numbers.back();

    cout << "Element at index 2: " << element << endl;
    cout << "First element: " << firstElement << endl;
    cout << "Last element: " << lastElement << endl;

    // Modifying elements
    numbers[1] = 200;

    // Size and Capacity
    int size = numbers.size();
    int capacity = numbers.capacity();
    cout << "Size of the vector: " << size << endl;         // Actual size in which numbers are filled
    cout << "Capacity of the vector: " << capacity << endl; // Total capacity if the vector of how many numbers it can store

    // Adding elements
    numbers.push_back(60);
    // Iterating over elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Removing elements
    numbers.pop_back();

    // Iterating over elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Range-based algorithm - sorting
    sort(numbers.begin(), numbers.end());

    // Print sorted elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    vector<int> v1(numbers);
    v1.push_back(10);
    for (const auto &number : v1)
    {
        cout << number << " ";
    }
    cout << endl;

    cout << "Capacity of V1 is: " << v1.capacity() << endl;
    cout << "Size of V1 is: " << v1.size();

    return 0;
}
