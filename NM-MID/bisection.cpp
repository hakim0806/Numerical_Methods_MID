#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
    return x * x * x - x - 2;
}

int main()
{
    double a, b, c;
    int n;

    // Input a and b until they become valid
    while (true)
    {
        // cout << "enter a , b : ";
        cin >> a >> b;

        if (f(a) * f(b) < 0)
        {
            break;
        }

        cout << "Invalid a and b. Enter again: ";
    }

    // Input number of iterations
    cin >> n;

    // Bisection Method
    for (int i = 1; i <= n; i++)
    {
        c = (a + b) / 2;

        cout << "Iteration " << i << " = " << c << endl;

        if (f(c) == 0)
        {
            break;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
    }

    cout << "Root = " << c << endl;

    return 0;
}
// 1 2
// 10