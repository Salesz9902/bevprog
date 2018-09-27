#include <std_lib_facilities.h>

int main()
{
    int a=2, b=13;
    cout << "csere elott: a = " << a << " b = " << b << '\n';
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "csere utan: a = " << a << " b = " << b << '\n';
    return 0;
}
