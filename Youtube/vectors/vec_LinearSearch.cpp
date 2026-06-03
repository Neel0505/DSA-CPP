#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int n, key;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n); // Declare a vector of integers with size n

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int index = -1;

    for (int i = 0; i < n; i++) {
        if (v[i] == key) {
            index = i;
            break;
        }
    }

    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}

//Time Complexity: O(n) - In the worst case, we may have to traverse the entire array to find the key or determine that it is not present.
//Space Complexity: O(1) - We are using only a constant amount of extra space to store the index of the found element.  