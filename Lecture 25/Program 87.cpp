#include <iostream>
using namespace std;

int main()
{

    int num = 5;

    cout << "Value of num before pointer initialization is : " << num << endl;

    // address of Operator - &

    cout << "Address of num before pointer initialization is : " << &num << endl;

    int *ptr = &num;

    cout << "Address of num after pointer initialization is : " << ptr << endl;
    cout << "Value of num after pointer initialization is : " << *ptr << endl;

    double d = 4.3;
    double *p2 = &d;

    cout << "Address is : " << p2 << endl;
    cout << "value is : " << *p2 << endl;

    cout << " size of integer is " << sizeof(num) << endl;
    cout << " size of pointer is " << sizeof(ptr) << endl;
    cout << " size of pointer is " << sizeof(p2) << endl;

    return 0;
}