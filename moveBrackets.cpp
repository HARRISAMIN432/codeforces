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
        int cb = 0, ob = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            (s[i] == '(') ? ob++ : cb++;
            ans = max(ans, (cb - ob < 0) ? 0 : cb - ob);
        }
        cout << ans << endl;
    }
}