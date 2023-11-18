#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n)
{
    int max1 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max1 = max(max1, num[i]);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return max1;
}

int getMin(int num[], int n)
{
    int min1 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        min1 = min(min1, num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return min1;
}

int main()
{
    int size;
    cin >> size;

    int num[100];

    // taking input in array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
    return 0;
}
