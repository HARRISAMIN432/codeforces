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
        int left = 0, right = 1, ans = 1;
        while (right < n)
        {
            while (s[right] == s[right - 1])
                right++;
            if (right - left > 1)
                ans = max(ans, right - left);
            left = right;
            right++;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}