#include<iostream>
#include<string>
using namespace std;

int main(){
    char str[] = {'a', 'b', 'c'};
    cout << str << endl;   // This will print the elements not the address unlike arrays
    

    // But it is not a valid string until we add a null character at the end of the array. So, we can do it like this:

    char str2[] = {'a', 'b', 'c', 'd', 'e', '\0'};  // This is a valid string now
    cout << str2 << endl;


    //So, we can use the strlen() function to find the length of the string. The strlen() function returns the number of characters in a string, excluding the null character.
    cout << strlen(str2) << endl;  // This will print the string length which is 5

    return 0;


    // To take input of a string, we can use the cin.getline() function. The cin.getline() function reads a line of text from the input stream and stores it in a character array. The syntax of the cin.getline() function is as follows:
    // cin.getline(array_name, size , delimiter);
    // For string we can't use cin as it will only take input till the first space. So, we can use cin.getline() to take input of a string with spaces.
    // Delimiter is optional. If we don't provide a delimiter, it will take input till the newline character. The default delimiter is '\n'.
    // It means stop taking input when you encounter a newline character. We can also provide a custom delimiter to stop taking input when we encounter that character. For example, if we provide a space as a delimiter, it will stop taking input when it encounters a space character.
}


