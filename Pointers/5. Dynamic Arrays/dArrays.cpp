/*
Dynamic arrays, often referred to as dynamically allocated arrays or resizable arrays, are data structures that can change in size during program execution. Unlike static arrays, which have a fixed size determined at compile time, dynamic arrays can grow or shrink as needed to accommodate a varying number of elements. They are typically implemented using pointers and dynamic memory allocation. Common examples of dynamic arrays include dynamic arrays in languages like C++ (e.g., `std::vector`) and ArrayLists in Java.

Dynamic arrays provide several advantages:

1. **Resizable**: They can change in size, making them suitable for situations where the number of elements is not known in advance.

2. **Efficiency**: They allow for efficient memory usage because they allocate memory only when needed.

3. **Flexible**: Elements can be easily added or removed from the array without the need to copy data or define a new array.

4. **Random Access**: Like static arrays, dynamic arrays support constant-time random access to elements.

However, dynamic arrays also come with some considerations, such as potential memory fragmentation and the need for proper memory management (deallocation) to prevent memory leaks.

In languages like C++, you can create dynamic arrays using `new` and `delete` (or `malloc` and `free` in C). In Java, dynamic arrays are implemented using classes like `ArrayList` from the Java Collections Framework. These classes provide built-in functionality for dynamic resizing, making it easier for developers to work with dynamic arrays.
*/

#include <iostream>
using namespace std;

int main()
{

    int size;
    cout << "Size: ";
    cin >> size;
    // int myArray[size]; //This is static array
    // Although in the above line there will be an Compile Time ERROR which says the expression must have a constant value that is we need to specify a number instead of the variable size and to sole this problem we create dynamic array
    // Dynamic Arrays and Dynamic Memory helps us to create an array at RunTime.
    int *myArray = new int[size]; // This is Dynamic Array

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        // cout << myArray[i]<<" ";
        cout << *(myArray + i) << " ";
    }

    delete[] myArray; // Once the use is over it is important to clear the dynamic memory (deallocate)
    myArray = NULL;   // And now the pointer is not pointing to the dynamic memory this is important to remove any problems later with that memory address.

    system("pause>0");
    return 0;
}