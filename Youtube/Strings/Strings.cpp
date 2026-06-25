#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "Hello World";
    cout << str << endl;  // This will print the string

    str = "Hello C++";  // We can change the value of the string
    cout << str << endl;  // This will print the new value of the string

    string str1 = "Hello";
    string str2 = "World";
    string str3 = str1 + " " + str2;  // We can concatenate strings using the + operator
    cout << str3 << endl;  // This will print the concatenated string

    string str4 = "Hello";
    cout << (str1 == str4) << endl;  // This will print 1 (true) because str1 and str4 have the same value

    cout<< str4.length() << endl;  // This will print the length of the string which is 5

    // We can also use the size() function to find the length of the string. The size() function returns the number of characters in a string, including the null character.
    cout << str4.size() << endl;  // This will print the size of the string which is 5

    getline(cin, str);  // This will take input of a string with spaces
    cout << str << endl;  // This will print the input string

    
}

