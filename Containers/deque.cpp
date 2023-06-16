#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

int main()
{
    deque<int> numbers;
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);
    numbers.push_front(20);
    numbers.push_front(10);

    // Printing elements
    for (int i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;

    // Accessing elements
    int element = numbers[2];
    int firstElement = numbers.front();
    int lastElement = numbers.back();

    cout << "Element at index 2: " << element << endl;
    cout << "First element: " << firstElement << endl;
    cout << "Last element: " << lastElement << endl;

    cout << "Element at position 2 is: " << numbers.at(1) << endl;

    // Modifying elements
    numbers[1] = 200;

    // Size
    int size = numbers.size();
    cout << "Size of the deque: " << size << endl;

    // Adding elements
    numbers.push_back(60);
    numbers.push_front(5);
    // Iterating over elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Removing elements
    numbers.pop_back();
    numbers.pop_front();

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

    return 0;
}
