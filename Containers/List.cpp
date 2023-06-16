#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> numbers = {10, 20, 30, 40, 50};

    // Modifying elements using iterators
    // auto it = next(numbers.begin(), 2);
    auto it = numbers.begin();
    *it = 300;

    // Size
    int size = numbers.size();
    cout << "Size of the list: " << size << endl;

    // Adding elements
    numbers.push_back(60);
    numbers.push_front(5);

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
    numbers.sort();

    // Print sorted elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
