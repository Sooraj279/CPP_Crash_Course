// We will create an array of numbers and then we will create two functions one that returns largest no. in the array and one that return the smallest and finally we will see how we can get both largest and smallest no. using just one function using pointers

#include <iostream>
using namespace std;

// function to get minimum number
int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
            min = numbers[i];
    }
    return min;
}

// function to get maximum number
int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
            max = numbers[i];
    }
    return max;
}

// Now to get the same result from a single function using pointers we will use the concept of Pass by Reference

// Pass By Reference
/* Passing by reference is a programming technique where a reference to a variable is passed as an argument to a function, allowing the function to directly operate on and modify the original variable's value rather than working with a copy. This approach is particularly useful for efficiently manipulating large data structures, as it avoids duplicating data, and for implementing functions that need to alter the state of objects or variables directly. In languages like C++ and C#, it is typically denoted using an ampersand in the function parameter list, indicating that the parameter is a reference to the original variable. Pass by reference enables more efficient and mutable data handling within functions, facilitating in-place modifications and enhancing code readability and maintainability.*/

void getMinAndMax(int numbers[], int size, int *min, int *max) // pointers are created to store addresses
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max) // dereferencing
            *max = numbers[i]; // original value have been changed
        if (numbers[i] < *min) // dereferencing
            *min = numbers[i]; // original value have been changed
    }
}

int main()
{
    int numbers[5] = {5, 6, -7, 8, 3};
    // cout << "Min no. is " << getMin(numbers, 5) << endl;
    // cout << "Max no. is " << getMax(numbers, 5) << endl;

    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max); // Addresses are being send to the function (Pass by reference)
    cout << "Min no. is " << min << endl;
    cout << "Max no. is " << max << endl;

    system("pause>0");
    return 0;
}