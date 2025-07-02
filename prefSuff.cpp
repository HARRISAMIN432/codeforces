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
        int mini = 1000000, maxi = 0;
        string ans;
        for (int i = 0; i < n; i++)
            ans += '0';
        for (int i = 0; i < n; i++)
            if (nums[i] < mini)
            {
                mini = nums[i];
                ans[i] = '1';
            }
        for (int i = n - 1; i >= 0; i--)
        {
            if (nums[i] > maxi)
            {
                maxi = nums[i];
                ans[i] = '1';
            }
        }
        cout << ans << endl;
    }
}