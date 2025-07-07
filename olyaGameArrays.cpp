#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n);
        for (int i = 0; i < n; i++)
        {
            int s = 0;
            cin >> s;
            vector<int> temp(s);
            for (int j = 0; j < s; j++)
                cin >> temp[j];
            v[i] = temp;
        }
        int mini1 = INT_MAX;
        vector<int> mini2(n);
        for (int i = 0; i < n; i++)
        {
            auto num = min_element(v[i].begin(), v[i].end());
            mini1 = min(mini1, *num);
            *num = INT_MAX;
        }
        for (int i = 0; i < n; i++)
            mini2[i] = *min_element(v[i].begin(), v[i].end());
        int idx = 0;
        for (int i = 1; i < n; i++)
            if (mini2[i] < mini2[idx])
                idx = i;
        long long ans = mini1;
        for (int i = 0; i < idx; i++)
            ans += mini2[i];
        for (int i = idx + 1; i < n; i++)
            ans += mini2[i];
        cout << ans << endl;
    }
}