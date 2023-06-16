#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    // vector<int> v = {10, 10, 20, 14, 15, 40};
    // set<int> mySet(v.begin(), v.end());
    set<int> mySet;

    // Inserting elements into the set
    mySet.insert(10);
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate value, won't be inserted

    // Checking if an element exists
    bool exists = mySet.count(10) > 0;
    cout << "Element 10 exists in the set: " << (exists ? "Yes" : "No") << endl;

    // Removing an element from the set
    mySet.erase(mySet.begin());

    // Checking the size of the set
    int setSize = mySet.size();
    cout << "Size of the set: " << setSize << endl;

    cout << "Is Set empty? " << (mySet.empty() ? "Yes" : "No") << endl;
    // Clearing the set
    // mySet.clear();

    // cout << "Is Set empty? " << (mySet.empty() ? "Yes" : "No") << endl;

    // Accessing elements
    cout << "Elements in the set: ";
    for (const auto &element : mySet)
    {
        cout << element << " ";
    }
    cout << endl;

    ///////////////// Some more Operation ///////////////////////

    set<int>::iterator it2 = mySet.find(20);

    cout << "Value present at itr: " << *it2 << endl;
    for (auto it = it2; it != mySet.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    // Checking the values in crend and crbegin
    auto it = mySet.crend();
    cout << "Value at crend is: " << *it << endl;

    auto it1 = mySet.crbegin();
    cout << "Value at crbegin is: " << *it1 << endl;

    // Printing set in reverse order
    cout << "Printing element in reverse order: ";
    for (auto it = mySet.crbegin(); it != mySet.crend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}
