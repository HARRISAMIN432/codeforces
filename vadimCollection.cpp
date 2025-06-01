#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        for (int i = 1; i < 10; i++)
        {
            int smallest = i;
            for (int j = i + 1; j < 10; j++)
            {
                if (s[j] <= s[smallest] && s[j] >= 57 - i)
                {
                    smallest = j;
                }
            }
            if (smallest != i)
                swap(s[smallest], s[i]);
        }
        cout << s << endl;
    }
}