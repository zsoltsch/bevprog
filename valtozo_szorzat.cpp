#include <std_lib_facilities.h>

int main()
{
int a = 2, b = 13;
cout << "csere elott: a = " << a << " b = " << b << '\n';

a = a * b;
b = a / b;
a = a / b;

if(a == 0)
{
    a = b;
    b = 0;
}
else if(b == 0)
{
    b = a;
    a = 0;
}
cout << "csere utan: a = " << a << " b = " << b << '\n';

return 0;
}
