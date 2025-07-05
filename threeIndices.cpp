#include <iostream>
#include <vector>
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
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int k = n;
        int left = 0, right = n - 1;
        while (n > 2 && left < right)
        {
            if (nums[left] == n)
            {
                left++,
                    n -= 1;
            }
            else if (nums[right] == n)
            {
                right--,
                    n -= 1;
            }
            else
                break;
        }
        if (n <= 2)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int i = left + 1; i < right; i++)
            {
                if (nums[i] == n)
                {
                    cout << left + 1 << " " << i + 1 << " " << right + 1 << endl;
                    break;
                }
            }
        }
    }
}