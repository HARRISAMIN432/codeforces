#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int o = 0, z = 0;
        for (char c : s)
            (c == '0') ? z++ : o++;
        int i = 0;
        while (i < s.size())
        {
            if (s[i] == '0')
                if (o > 0)
                    o--;
                else
                    break;
            else if (z > 0)
                z--;
            else
                break;
            i++;
        }
        cout << s.size() - i << endl;
    }
}