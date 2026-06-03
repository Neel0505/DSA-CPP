#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Correct vector declaration syntax
    vector<int> v;

    // ==========================
    // push_back()
    // Adds an element at the end of the vector.
    // Time Complexity: O(1) amortized
    // ==========================
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // ==========================
    // size()
    // Returns the current number of elements
    // present in the vector.
    // Time Complexity: O(1)
    // ==========================
    cout << "Size of vector: " << v.size() << endl;

    // ==========================
    // front()
    // Returns the first element of the vector.
    // Time Complexity: O(1)
    // ==========================
    cout << "First element (front): " << v.front() << endl;

    // ==========================
    // back()
    // Returns the last element of the vector.
    // Time Complexity: O(1)
    // ==========================
    cout << "Last element (back): " << v.back() << endl;

    // ==========================
    // at(index)
    // Accesses element at a given index.
    // Performs bounds checking.
    // Throws an exception if index is invalid.
    // Time Complexity: O(1)
    // ==========================
    cout << "Element at index 2: " << v.at(2) << endl;

    // Display vector before pop_back()
    cout << "\nVector before pop_back(): ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // ==========================
    // pop_back()
    // Removes the last element from the vector.
    // Does NOT return the removed value.
    // Time Complexity: O(1)
    // ==========================
    v.pop_back();

    // Display vector after pop_back()
    cout << "Vector after pop_back(): ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    // Check updated size
    cout << "Updated size: " << v.size() << endl;

    return 0;
}