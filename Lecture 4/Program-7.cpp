#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1; // Initialize i
    int count = 1;
    while (i <= n)
    {
        int j = 1;

        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0; // Add a return statement to indicate successful completion
}