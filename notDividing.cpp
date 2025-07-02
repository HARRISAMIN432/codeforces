#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i = 1;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        while (i < n)
            if (nums[i - 1] == 1 && nums[i] == 1)
            {
                (i > 1 && (nums[i - 1] + 2) % nums[i - 2] == 0) ? nums[i - 1] += 3 : nums[i - 1] += 2;
                nums[i++] += 1;
            }
            else if (nums[i - 1] == 1)
                (i > 1 && (nums[i - 1] + 1) % nums[i - 2] == 0) ? nums[i - 1] += 2 : nums[i - 1] += 1;
            else if (nums[i - 1] > nums[i])
                i++;
            else
            {
                ((nums[i] + 1) % nums[i - 1] == 0) ? nums[i] += 2 : nums[i] += 1;
                i++;
            }
        for (int i = 0; i < n; i++)
            (i < n - 1) ? cout << nums[i] << " " : cout << nums[i] << endl;
    }

    return 0;
}
