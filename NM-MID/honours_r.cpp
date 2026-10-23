// #include<bits/stdc++.h>
// using namespace std;

#include <iostream>
// #include <string>
#include <vector>
using namespace std;

int main()
{
    int order;
    // cout << "Enter the order of the equation: ";
    cin >> order;

    vector<int> a(order + 1);
    // cout << "Enter the co-efficient: ";
    for (int i = 0; i <= order; i++)
        cin >> a[i];

    int x;
    // cout << "Enter the value of x: ";
    cin >> x;

    vector<int> p(order + 1);
    p[0] = a[0];

    for (int i = 1; i <= order; i++)
        p[i] = p[i - 1] * x + a[i];

    cout << "Result: " << p[order] << endl;

    return 0;
}
/*
3
2 3 4 5
2

output
Result: 41
*/