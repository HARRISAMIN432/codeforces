#include <iostream>
#include <vector>
using namespace std;

main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        bool allSame = true;
        vector<int> nums(n);
        cin >> nums[0];
        for (int i = 1; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] != nums[i - 1])
                allSame = false;
        }
        if (allSame)
        {
            cout << "Yes" << endl;
            continue;
        }
        bool pakdaGya = false;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == 0 && nums[i] == nums[i - 1])
            {
                pakdaGya = true;
                break;
            }
        }
        (pakdaGya) ? cout << "Yes" << endl : cout << "No" << endl;
    }
}