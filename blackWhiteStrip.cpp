#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int b = 0;
        for (int i = 0; i < k; i++)
            if (s[i] != 'B')
                b++;
        int ans = b;
        for (int j = k; j < n; j++)
        {
            if (s[j] != 'B')
                b++;
            if (s[j - k] != 'B')
                b--;
            ans = min(ans, b);
        }
        cout << ans << '\n';
    }
}
