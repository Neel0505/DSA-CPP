// Memory address of a variable can be obtained using the address-of operator (&).
// The pointer variable can be declared using the asterisk (*) symbol.

#include <iostream>
using namespace std;

int main() {
    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10
    int* ptr;     // Declare a pointer variable 'ptr' that can point to an integer

    ptr = &a;     // Assign the address of variable 'a' to pointer 'ptr'
    int **parentptr = &ptr; // Declare a pointer to a pointer 'parentptr' and assign it the address of 'ptr'
    cout << "Value of a: " << a << endl;           // Output the value of 'a'
    cout << "Address of a: " << &a << endl;        // Output the address of 'a'
    cout << "Value of ptr: " << ptr << endl;           // Output the value of pointer 'ptr' (which is the address of 'a')
    cout << "Value pointed to by ptr: " << *ptr << endl; // Output the value pointed to by 'ptr' (which is the value of 'a')
    cout << "Value of parentptr: " << parentptr << endl;           // Output the value of pointer 'parentptr' (which is the address of 'ptr')
    cout << "Value pointed to by parentptr: " << **parentptr << endl; // Output the value pointed to by 'parentptr' (which is the value of 'a')

    return 0;
}


// Dereferencing a pointer means accessing the value stored at the memory address that the pointer is pointing to. 
// This is done using the dereference operator (*). 

// Null ptr 
// int* ptr = nullptr; // This initializes the pointer to a null pointer, indicating that it does not point to any valid memory address.

// pass by reference using pointer
// void increment(int* num) {
//     (*num)++; // Increment the value pointed to by 'num'
// }