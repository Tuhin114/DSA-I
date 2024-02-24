#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{

    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The reversed array is " << arr[i] << " ";
    }
    cout << endl;
}

void printArray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "The array is " << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arrEven[6] = {1, 4, 0, 5, -2, 15};
    int arrOdd[5] = {2, 6, 3, 9, 4};

    // Display
    printArray(arrEven, 6);
    printArray(arrOdd, 5);

    reverse(arrEven, 6);
    reverse(arrOdd, 5);

    return 0;
}
