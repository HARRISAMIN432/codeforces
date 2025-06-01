#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

main()
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
        sort(nums.begin(), nums.end());
        if ((nums[0] % 2 && nums[nums.size() - 1] % 2) || ((nums[0] % 2 == 0 && nums[nums.size() - 1] % 2 == 0)))
        {
            cout << 0 << endl;
            continue;
        }
        int ld = 0, rd = 0;
        if (nums[nums.size() - 1] & 1)
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] & 1)
                    break;
                ld++;
            }
        }
        if (!(nums[nums.size() - 1] & 1))
        {
            for (int i = 0; i < nums.size(); i++)
            {
                if (!(nums[i] & 1))
                    break;
                ld++;
            }
        }
        if (!(nums[0] & 1))
        {
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if (!(nums[i] & 1))
                    break;
                rd++;
            }
        }
        if ((nums[0] & 1))
        {
            for (int i = nums.size() - 1; i >= 0; i--)
            {
                if ((nums[i] & 1))
                    break;
                rd++;
            }
        }
        cout << min(ld, rd) << endl;
    }
}