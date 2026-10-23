#include <iostream>
using namespace std;
int main()
{
    int n;
    double x[20], y[20][20], value, sum, p;
    cout << "Enter number of data: ";
    cin >> n;

    cout << "Enter x and y values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i][0];
    }

    // Divided difference table
    for (int j = 1; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            y[i][j] = (y[i + 1][j - 1] - y[i][j - 1]) / (x[i + j] - x[i]);
        }
    }

    cout << "Enter the value of x: ";
    cin >> value;

    sum = y[0][0];
    p = 1;

    for (int i = 1; i < n; i++)
    {
        p = p * (value - x[i - 1]);
        sum = sum + p * y[0][i];
    }

    cout << "Interpolated value = " << sum << endl;

    return 0;
}
/*
Enter number of data: 3
Enter x and y values:
1 1
2 8
4 64
Enter the value of x: 3
output
Interpolated value = 27
*/