#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int totalDots = 0;
        bool is2Possible = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                totalDots++;
                if (i + 2 < n && s[i + 1] == '.' && s[i + 2] == '.')
                {
                    is2Possible = true;
                    break;
                }
            }
        }
        cout << ((is2Possible) ? 2 : totalDots) << endl;
    }
    return 0;
}