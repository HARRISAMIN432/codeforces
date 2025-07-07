#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, d;
    cin >> n >> d;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    int left = -1, right = n - 1;
    int ans = 0;
    while (left < right)
    {
        int p = nums[right], pe = 1;
        while (p * pe <= d)
        {
            left++;
            if (left == right)
                break;
            pe++;
        }
        if (p * pe > d)
            ans++;
        right--;
    }
    cout << ans << endl;
}
