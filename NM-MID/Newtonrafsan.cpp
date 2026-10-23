#include <iostream>
#include <cmath>
using namespace std;
double f(double x)
{
    return x * x * x - 6 * x + 4;
}
double df(double x)
{
    return 3 * x * x - 6;
}
int main()
{
    double x0, x1;
    // cout << "Enter initial value x0: ";
    cin >> x0;

    while (true)
    {
        if (df(x0) == 0)
        {
            cout << "Derivative is zero!";
            return 0;
        }

        x1 = x0 - f(x0) / df(x0);

        if (fabs(x1 - x0) < 0.0001)
            break;

        x0 = x1;
    }

    cout << "Root = " << x1 << endl;

    return 0;
}
// 1
// output : Root = 0.732051