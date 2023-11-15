#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int placeValue = 1; // To represent powers of 2

    while (n > 0)
    {
        int bit = n & 1; // Extract the least significant bit

        ans = ans + bit * placeValue; // Update ans by adding the bit at the appropriate place

        n = n >> 1;       // Right shift to check the next bit
        placeValue *= 10; // Increase the place value by powers of 2 (not 10 for binary)
    }

    cout << "Binary equivalent: " << ans << endl;
    return 0;
}
