#include <iostream>
using namespace std;

int main()
{
    int num[5] = {2, 3, 4, 6, 8};

    // if we try to print just num it will give the memory address of the first element of the array
    cout << num << endl;

    // And to prove this let's print the address of the first element of the array
    cout << &num[0] << endl;
    // You will see same result

    // So what's happening here is that the name of the Array is acting like a pointer to the first element at index 0 and [i] is acting as a dereference to the pointer. So line num[2] can be explained as num the address of the 1st element and 2 is the jump to two address after the first and the [] just derefernced it.
    cout << num[2] << endl;

    // to prove the above here is another line of code
    cout << *(num + 2) << endl; // dereferencing (num + 2)
    // You will see same result

    // Making Array by taking user input
    int luckyNumbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    // taking output using deferencing

    for (int i = 0; i < 5; i++)
    {
        cout << *(luckyNumbers + i) << " ";
    }

    system("pause>0");
    return 0;
}