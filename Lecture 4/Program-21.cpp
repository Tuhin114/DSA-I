#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // Print Sapce
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // 1st Triangle
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        // 2nd Triangle
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
}