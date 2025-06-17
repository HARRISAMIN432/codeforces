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
        int n, s;
        cin >> n >> s;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (s > nums[nums.size() - 1])
            cout << s - nums[0] << endl;
        else if (s < nums[0])
            cout << nums[nums.size() - 1] - s << endl;
        else
        {
            int right = nums[nums.size() - 1] - s;
            int left = s - nums[0];
            (right <= left) ? cout << 2 * right + left << endl : cout << 2 * left + right << endl;
        }
    }
}