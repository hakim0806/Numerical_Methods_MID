
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n;

    cin >> s >> n;

    int dot = s.find('.');
    if (dot == -1)
        dot = s.length();

    int count = 0, pos = -1;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '1' && s[i] <= '9')
        {
            count++;
            if (count == n)
                pos = i;
        }
        else if (s[i] == '0' && count > 0)
        {
            count++;
            if (count == n)
                pos = i;
        }
    }

    if (pos != -1 && pos + 1 < s.length())
    {
        int next = s[pos + 1] - '0';

        if (next > 5 || (next == 5 &&
                         ((s[pos] - '0') % 2 != 0)))
        {
            s[pos]++;
        }

        s = s.substr(0, pos + 1);
    }

    cout << s;
    return 0;
}
/*
3.14159 4
3.142
*/