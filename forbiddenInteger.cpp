#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1 && x == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        if (n % 2 == 0)
        {
            cout << "YES" << endl;
            if (x == 1)
            {
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 2;
                    if (i < n / 2 - 1)
                        cout << ' ';
                }
                cout << endl;
                continue;
            }
            if (x == 2)
            {
                cout << n << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << 1;
                    if (i < n - 1)
                        cout << ' ';
                }
                cout << endl;
                continue;
            }
        }
        int adder = -1;
        (x == 1) ? adder = 2 : adder = 1;
        bool yes = true;
        vector<int> ans;
        while (n > 0)
        {
            if (n <= k && n != x)
            {
                ans.push_back(n);
                break;
            }
            n -= adder;
            ans.push_back(adder);
            if (n < 0)
            {
                yes = false;
                break;
            }
        }
        if (yes)
        {
            cout << "YES" << endl;
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i];
                if (i < ans.size() - 1)
                    cout << ' ';
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}