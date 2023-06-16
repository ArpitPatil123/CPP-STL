#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> myMap;

    // Inserting key-value pairs into the map
    myMap.insert({1, "One"});
    myMap.insert({2, "Two"});
    myMap.insert({3, "Three"});

    // Accessing values using keys
    cout << "Value at key 2: " << myMap[2] << endl;

    // Modifying values using keys
    myMap[2] = "New Two";

    // Checking if a key exists
    if (myMap.count(3) > 0)
    {
        cout << "Key 3 exists in the map." << endl;
    }

    // Iterating over the map
    cout << "Key-Value pairs in the map: ";
    for (const auto &pair : myMap)
    {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Finding a value using a key
    auto it = myMap.find(3);

    cout << "Finding the value for key 3: " << it->second << endl;
    cout << "Finding the value for key 3: " << (*it).second << endl;

    // Removing a key-value pair using a key
    myMap.erase(3);

    // After erasing the key-value pair
    cout << "Key-Value pairs in the map after erasing a key-value pair: " << endl;
    for (const auto &pair : myMap)
    {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Clearing the map
    myMap.clear();

    // Checking if the map is empty
    if (myMap.empty())
    {
        cout << "Map is empty." << endl;
    }

    return 0;
}
