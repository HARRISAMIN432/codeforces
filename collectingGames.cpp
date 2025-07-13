#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> nums(n);
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            nums[i] = {num, i};
        }
        sort(nums.begin(), nums.end());
        vector<long long> prefix(n);
        prefix[0] = nums[0].first;
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i].first;
        vector<int> ans(n);
        long long bound = 0;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (prefix[i] <= bound)
            {
                ans[nums[i].second] = ans[nums[i - 1].second];
                continue;
            }
            int iter = i + 1;
            temp = 0, bound = prefix[i];
            while (iter < n && static_cast<long long>(nums[iter].first) <= bound)
            {
                bound += nums[iter].first;
                iter++;
                temp++;
            }
            ans[nums[i].second] = temp + i;
        }
        cout << ans[0];
        for (int i = 1; i < n; i++)
            cout << " " << ans[i];
        cout << endl;
    }
}