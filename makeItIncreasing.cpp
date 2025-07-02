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
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        bool np = false;
        for (int i = 0; i < n; i++)
            if (nums[i] < i)
            {
                np = true;
                break;
            }
        if (np)
        {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        np = false;
        for (int i = n - 2; i >= 0; i--)
        {
            while (nums[i] >= nums[i + 1])
            {
                ans++;
                nums[i] /= 2;
            }
            if (nums[i] < i)
            {
                np = true;
                break;
            }
        }
        cout << ((np) ? -1 : ans) << endl;
    }
    return 0;
}