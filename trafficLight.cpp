#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<int> gx;
        for (int i = 0; i < n; i++)
            if (s[i] == 'g')
                gx.push_back(i);
        if (gx.size() == n)
        {
            cout << 0 << endl;
            continue;
        }
        int iter = 0, small = gx[0], ans = -1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'g')
                (iter == gx.size() - 1) ? iter = -1 : iter++;
            else if (s[i] == c)
            {
                if (iter == -1)
                {
                    ans = max(ans, n - i + small);
                    break;
                }
                else
                    ans = max(ans, gx[iter] - i);
            }
        }
        cout << ans << endl;
    }
}