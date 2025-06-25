#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        long long ans = 0;
        for (int i = 0; i < n; i++)
            ans += min(nums[i], a - 1);
        cout << ans + b << endl;
    }
    return 0;
}