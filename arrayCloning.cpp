#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        vector<int> freq(n, 0);
        unordered_map<int, int> m;
        for (int num : nums)
            m[num]++;
        int mx = 0;
        for (auto it = m.begin(); it != m.end(); ++it)
            if (it->second > mx)
                mx = it->second;
        int req = n - mx, ans = 0, exp = 1;
        while (req >= mx * exp && req > 0)
        {
            ans += 1 + mx * exp;
            req -= (mx * exp);
            exp *= 2;
        }
        if (req > 0)
            ans += 1 + req;
        cout << ans << endl;
    }
}