// Binary Serach(Time complexicity-O(logN))
#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Go to left prt
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {1, 4, 8, 20, 41, 46};
    int odd[5] = {2, 7, 9, 12, 24};

    int evenIndex = binarySearch(even, 6, 91);
    cout << "Element found at index " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 24);
    cout << "Element found at index " << oddIndex << endl;

    return 0;
}