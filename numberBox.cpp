#include <iostream>
#include <vector>
using namespace std;

int sum(vector<vector<int>> &nums)
{
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
        for (int j = 0; j < nums[0].size(); j++)
            sum += abs(nums[i][j]);
    return sum;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> nums(n, vector<int>(m));
        int negs = 0;
        bool isZero = false;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
            {
                cin >> nums[i][j];
                if (nums[i][j] < 0)
                    negs++;
                if (nums[i][j] == 0)
                    isZero = true;
            }
        if (isZero || negs % 2 == 0)
            cout << sum(nums) << endl;
        else
        {
            int si = 0, sj = 0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    nums[i][j] = abs(nums[i][j]);
                    if (nums[i][j] < nums[si][sj])
                        si = i, sj = j;
                }
            }
            nums[si][sj] = -1 * nums[si][sj];
            int sum = 0;
            for (int i = 0; i < nums.size(); i++)
                for (int j = 0; j < nums[0].size(); j++)
                    sum += nums[i][j];
            cout << sum << endl;
        }
    }
}