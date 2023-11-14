#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1; // Initialize i
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0; // Add a return statement to indicate successful completion
}
