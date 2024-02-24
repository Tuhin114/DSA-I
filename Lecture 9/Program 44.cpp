#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

void inputArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
}

int main()
{
    const int maxSize = 10;
    int myArray[maxSize];
    int size;

    cout << "Enter the size of the Array: " << endl;
    cin >> size;

    if (size <= 0 || size > maxSize)
    {
        cout << "Invalid array size. Please enter a size between 1 and " << maxSize << endl;
        return 1; // Exit with an error code
    }

    inputArray(myArray, size);

    // Display
    cout << "The entered array is : \n";
    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << "\n";

    cout << "Enter the element to search for" << endl;
    int key;
    cin >> key;

    bool found = search(myArray, 10, key);

    if (found)
    {
        cout << "Element is present in array";
    }
    else
    {
        cout << "Element is not present in array";
    }
    return 0;
}