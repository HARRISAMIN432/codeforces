#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>

using namespace std;

main()
{
    string s1;
    cin >> s1;
    int c1 = 0, c2 = 0, c3 = 0;
    for (char c : s1)
        if (isdigit(c) && c == '1')
            c1++;
        else if (isdigit(c) && c == '2')
            c2++;
        else if (isdigit(c))
            c3++;
    for (char &c : s1)
    {
        if (isdigit(c) && c1)
        {
            c = '1';
            c1--;
        }
        else if (isdigit(c) && c2)
        {
            c = '2';
            c2--;
        }
        else if (isdigit(c) && c3)
        {
            c = '3';
            c3--;
        }
    }
    cout << s1 << endl;
}