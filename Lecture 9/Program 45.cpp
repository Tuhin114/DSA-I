#include <iostream>
using namespace std;

// void reverse(int arr[], int n)
// {

//     int start = 0;
//     int end = n - 1;

//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arrEven[6] = {1, 4, 0, 5, -2, 15};
//     int arrOdd[5] = {2, 6, 3, 9, 4};

//     reverse(arrEven, 6);
//     reverse(arrOdd, 5);

//     printArray(arrEven, 6);
//     printArray(arrOdd, 6);

//     return 0;
// }

// Alternative

void swap(int arr[], int size)
{
    for (int i = 0; i < size - 1; i += 2)
    {
        if (i + 1 < size)
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arrEven[6] = {1, 4, 0, 5, -2, 15};
    int arrOdd[5] = {2, 6, 3, 9, 4};

    swap(arrEven, 6);
    swap(arrOdd, 5);

    printArray(arrEven, 6);
    printArray(arrOdd, 5);

    return 0;
}