#include <iostream>
using namespace std;

// Function to input an array of integers
int *inputArray(int &n)
{
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n]; // Dynamically allocate an array of size n

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return arr;
}

// <--DS ARRAYS-->

// Sum of Arrays Elements
void sumArray()
{
    cout << "Enter the number of elements " << endl;
    int n; // variable of array's length
    cin >> n;

    int a[n];

    // input
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // adding
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    // printing value
    cout << sum << endl;
}

// Largest Element in Array
int largeElement()
{
    int n;
    int *myArray = inputArray(n); // Call the inputArray function

    // You can now use 'myArray' in your main function
    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
    {
        cout << myArray[i] << " ";
    }

    // Don't forget to free the dynamically allocated memory
    delete[] myArray;

    return 0;
}

// The main function where the program actual starts to run
int main()
{
    // sumArray();
    largeElement();
    return 0;
}
