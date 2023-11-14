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
        int count = i;
        while (j <= i)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0; // Add a return statement to indicate successful completion
}

// Aliter
// cout<<(i-j+1)