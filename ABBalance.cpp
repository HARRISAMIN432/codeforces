#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == s[s.size() - 1])
            cout << s << endl;
        else
        {
            s[0] = 'a', s[s.size() - 1] = 'a';
            cout << s << endl;
        }
    }
}