#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ones = 0, ans = 0;
        for (char c : s)
            if (c == '1')
                ones++;
        for (int i = 0; i < s.size(); i++)
            ans += (s[i] == '1') ? ones - 1 : ones + 1;
        cout << ans << endl;
    }
}