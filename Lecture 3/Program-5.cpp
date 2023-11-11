#include <iostream>
using namespace std;

// Pattern 1
// int main()
// {
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     int i = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << "*";
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// Pattern 2
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}