#include <iostream>
using namespace std;

main()
{
    string s;
    cin >> s;
    int consec = 0, i = 1;
    char consecChar = 'a';
    while (i < s.size())
    {
        if (s[i] == s[i - 1])
        {
            consec += 2;
            consecChar = s[i++];
            while (i < s.size() && s[i++] == consecChar)
            {
                consec++;
                if (consec == 7)
                {
                    cout << "YES" << endl;
                    return 0;
                }
            }
            consec = 0;
        }
        i++;
    }
    cout << "NO" << endl;
}