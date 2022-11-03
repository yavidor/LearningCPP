#include <iostream>
using std::cout;
using std::hex;
int main()
{
    int a = 5, b = 0, x = 6, y;
    y = (a || b && x--) || (!a || !a || x++);
    cout << "y = " << y << " x = " << x << '\n';
    y = (y || a && x++) && (!y || x--);
    cout << "y = " << y << " x = " << x << '\n';
    y = !a && b && (!x-- || !b) && !x++;
    cout << "y = " << y << " x = " << x << '\n';

    return 0;
}
