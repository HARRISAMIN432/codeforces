#include <iostream>
using namespace std;

main()
{
    string s;
    cin >> s;
    int upc = 0;
    for (char c : s)
        if (c < 95)
            upc++;
    if (s.size() / 2.0 < upc)
        for (char &c : s)
        {
            if (c > 95)
                c -= 32;
        }
    else
        for (char &c : s)
            if (c < 95)
                c += 32;
    cout << s << endl;
}