#include <iostream>
#include <string>
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
        int ans = 0, count = 0;
        char cc = 'a';
        for (char c : s)
        {
            if (count == 0)
            {
                count++;
                cc = c;
            }
            else if (count && cc == c)
                count++;
            else if (count)
            {
                ans--;
                count--;
            }
            if (count == 0)
            {
                cc = 'a';
            }
        }
        cout << ((ans & 1) ? "DA" : "NET") << endl;
    }
    return 0;
}