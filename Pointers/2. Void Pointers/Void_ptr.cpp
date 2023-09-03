// A void pointer, often denoted as `void*`, is a special type of pointer in programming that does not have a specific data type associated with it. It is used to point to memory locations that can hold data of any type. Void pointers are commonly used in situations where the data type of the variable being pointed to is not known in advance or when you want to create more generic or polymorphic code. While void pointers provide flexibility, they also require typecasting (explicit conversion) to access the data they point to, as the compiler doesn't know the data type by default. This flexibility makes them a useful tool for managing data with unknown or variable types in languages like C and C++.

#include <iostream>
using namespace std;

// Different data type values required different functions
void printNumber(int *numberPtr)
{
    cout << *numberPtr << endl;
}

void printLetter(char *charPtr)
{
    cout << *charPtr << endl;
}

// To remove the above problem we use void pointer

void print(void *ptr /*Taking void pointer as an argument*/, char type)
{
    switch (type)
    {
    case 'i' /* constant-expression */:
        /* code */
        cout << *((int *)ptr) << endl;
        break;

    case 'c' /* constant-expression */:
        /* code */
        cout << *((char *)ptr) << endl;
        break;

    default:
        break;
    }
}

int main()
{
    int number = 6;
    char letter = 'a';

    // Using top functions
    printNumber(&number);
    printLetter(&letter);

    // Using void pointer function
    print(&number, 'i');
    print(&letter, 'c');

    // Logical error
    print(&letter, 'i');

    system("pause>0");
    return 0;
}

// It is advice to be higly causious when using void pointers as there are chances of logical errors which the compiler cannot detect like for example wrong typecasting.