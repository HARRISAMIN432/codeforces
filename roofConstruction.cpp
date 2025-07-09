#include <iostream>
#include <vector>
using namespace std;

int po2(int n)
{
    for (int i = n - 1; i >= 0; i--)
        if (!(i & (i - 1)))
            return i;
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 2)
            cout << 0 << " " << 1 << endl;
        else if (n == 3)
            cout << 2 << " " << 0 << " " << 1 << endl;
        else
        {
            int p2 = po2(n);
            vector<int> ans;
            for (int i = 1; i < p2; i++)
                ans.push_back(i);
            ans.push_back(0);
            for (int i = p2; i < n; i++)
                ans.push_back(i);
            cout << ans[0];
            for (int i = 1; i < n; i++)
                cout << " " << ans[i];
            cout << endl;
        }
    }
    return 0;
}