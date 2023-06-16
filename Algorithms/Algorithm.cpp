#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // 1. Binary Search
    cout << "Finding 3: " << binary_search(v.begin(), v.end(), 3) << endl;

    // 2. Lower Bound
    auto it = lower_bound(v.begin(), v.end(), 2);
    cout << "Lower Bound of 3: " << *it << endl;

    // 3. Upper Bound
    it = upper_bound(v.begin(), v.end(), 3);
    cout << "Upper Bound of 3: " << *it << endl;

    // 4. Generate and print permutations
    // do
    // {
    //     for (const auto &num : v)
    //     {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // } while (next_permutation(v.begin(), v.end()));

    // 5. Rotate
    cout << "Rotating by 1: ";
    rotate(v.begin(), v.begin() + 4, v.end());
    for (const auto &num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // 6. Shuffle
    cout << "Shuffling: ";
    random_shuffle(v.begin(), v.end());
    for (const auto &num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // 7. Sort
    cout << "Sorting: ";
    sort(v.begin(), v.end());
    for (const auto &num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // 8. Reverse
    cout << "Reversing: ";
    reverse(v.begin(), v.end());
    for (const auto &num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // 9. Max and Min
    cout << "Max of (1,2): " << max(1, 2) << endl;
    cout << "Min of (1,2): " << min(1, 2) << endl;

    // 10. Swap
    int a = 1, b = 2;
    cout << "Before Swap: " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swap: " << a << " " << b << endl;

    // 11. Accumulate
    // Parameters:
    // __first – Start of range.
    // __last – End of range.
    // __init – Starting value to add other values to.
    cout << "Sum of (1,2,3,4,5): " << accumulate(v.begin(), v.end(), 0) << endl;

    // 12. Count
    cout << "Count of 3: " << count(v.begin(), v.end(), 3) << endl;

    // 13. Find
    auto itr = find(v.begin(), v.end(), 1);
    cout << "Found 1 at position: " << *itr << endl;

    // 14. Remove
    itr = remove(v.begin(), v.end(), 3);
    cout << "After removing 3: ";
    for (const auto &num : v)
    {
        cout << num << " ";
    }
    cout << endl;

    // 15. Distance
    cout << "Distance between 1 and 5: " << distance(v.begin(), v.end()) << endl;

    // 16. Copy
    vector<int> v2(5);
    copy(v.begin(), v.end(), v2.begin());
    cout << "Copied vector: ";
    for (const auto &num : v2)
    {
        cout << num << " ";
    }
    cout << endl;

    // 17. Fill
    fill(v2.begin(), v2.end(), 0);
    cout << "Filled vector: ";
    for (const auto &num : v2)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}