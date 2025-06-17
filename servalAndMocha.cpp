#include <iostream>
#include <vector>
#include <numeric>
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
        bool isOne = false;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] < 3)
                isOne = true;
        }
        if (isOne)
            cout << "Yes" << endl;
        else
        {
            int found = false;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j < n; j++)
                {
                    if (gcd(nums[i], nums[j]) < 3)
                    {
                        found = true;
                        break;
                    }
                }
                if (found)
                    break;
            }
            (found) ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }
}