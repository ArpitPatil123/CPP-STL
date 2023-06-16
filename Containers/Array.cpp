#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<int, 5> numbers = {10, 20, 30, 40, 50};

    // Accessing elements
    int element = numbers[2];
    int firstElement = numbers.front();
    int lastElement = numbers.back();

    cout << "Element at index 2: " << element << endl;
    cout << "First element: " << firstElement << endl;
    cout << "Last element: " << lastElement << endl;

    // Modifying elements
    numbers[1] = 200;

    // Size
    int size = numbers.size();
    cout << "Size of the array: " << size << endl;

    // Iterating over elements
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    // Range-based algorithm - sorting
    sort(numbers.begin(), numbers.end());

    // Comparison
    array<int, 5> otherNumbers = {1, 2, 3, 4, 5};
    bool areEqual = (numbers == otherNumbers);
    cout << "Are the arrays equal? " << boolalpha << areEqual << endl;

    // Swapping
    numbers.swap(otherNumbers);

    cout << "Swapped numbers array: ";
    for (const auto &number : numbers)
    {
        cout << number << " ";
    }
    cout << endl;

    cout << "Swapped otherNumbers array: ";
    for (const auto &number : otherNumbers)
    {
        cout << number << " ";
    }
    cout << endl;

    return 0;
}
