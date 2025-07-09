#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> temp(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            temp[i].first = num;
            temp[i].second = i;
        }
        vector<int> o(n);
        for (int i = 0; i < n; i++)
            o[i] = temp[i].first;
        sort(temp.begin(), temp.end());
        long long a = 0;
        vector<int> ans(n + 1);
        ans[0] = n / 2;
        int threshUp = n / 2 + 1, threshDown = n / 2 - 1;
        for (int i = n - 1; i >= 0; i -= 2)
        {
            ans[temp[i].second + 1] = threshUp++;
            if (i - 1 >= 0)
                ans[temp[i - 1].second + 1] = threshDown--;
        }
        for (int i = 1; i <= n; i++)
            a += 2LL * abs(ans[i] - ans[0]) * o[i - 1];
        cout << a << endl;
        cout << ans[0];
        for (int i = 1; i <= n; i++)
            cout << " " << ans[i];
        cout << endl;
    }
}