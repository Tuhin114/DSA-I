#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // 1st triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }

        // star pattern
        int star = 2 * i - 2;
        while (star > 0)
        {
            cout << "*";
            star--;
        }

        // 2nd triangle
        int k = n;
        while (k >= i)
        {
            cout << k;
            k--;
        }
        cout << endl;
        i++;
    }
}