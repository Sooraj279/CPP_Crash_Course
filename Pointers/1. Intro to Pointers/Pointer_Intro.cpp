// A pointer in programming is a variable that stores the memory address of another variable or data structure, enabling indirect access to the data at that memory location. This allows for efficient data manipulation, dynamic memory allocation, and traversal of data structures. Pointers have types corresponding to the data they point to (e.g., `int*` for integers), can be dereferenced to access the pointed-to value, and may be assigned a null value to represent uninitialized or invalid pointers. They are crucial for tasks involving direct memory interaction, making them a fundamental concept in languages like C and C++.

#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    cout << n << endl;

    // Address of n
    cout << &n << endl;

    // creating a pointer
    // NOTE : the pointer must be of same data type as the variable it is pointing to otherwise error.
    int *ptr = &n;

    // Reference: Output the memory address of n with the pointer
    cout << ptr << endl;

    // Dereference: Output the value of n with the pointer
    cout << *ptr << endl;

    // Change the value of the pointer
    *ptr = 12;

    // New value at the memory location
    cout << *ptr << endl;

    // The value of n is changed as in it's memory location the value is changed
    cout << n << endl;

    // NOTE : without assigning address to a pointer variable although  we cann create a pointer but it will result in undefined behavior. The reason is that the pointer ptr does not point to a valid memory location when it's uninitialized, so attempting to write or read from it can lead to unpredictable outcomes.
    // int *ptr2;
    // *ptr2 = 6;
    // cout << *ptr2 << endl;
    // The above must not be done but instead you can create a variable let say x and point it to like int * ptr2 = &x;

    system("pause>0");
    return 0;
}