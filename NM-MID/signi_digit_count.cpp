
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int count = 0;
    bool start = false, decimal = false;

    // cout << "Enter a number: ";
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '.')
        {
            decimal = true;
            continue;
        }

        if (s[i] >= '1' && s[i] <= '9')
        {
            count++;
            start = true;
        }
        else if (s[i] == '0')
        {
            if (start)
                count++;
            else if (decimal)
            {
                continue;
            }
        }
    }

    cout << "Significant digits = " << count;

    return 0;
}
