#include <iostream>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    // Bitwise operator
    cout << " a&b " << (a & b) << endl;
    cout << " a|b " << (a | b) << endl;
    cout << " ~a " << (~a) << endl;
    cout << " a^b " << (a ^ b) << endl;

    // Right shift & left Shift
    cout << (17 << 2) << endl;
    cout << (21 << 2) << endl;
    cout << (19 >> 2) << endl;

    // Post & Pre decrement

    int i = 7;

    cout << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;

    return 0;
}
