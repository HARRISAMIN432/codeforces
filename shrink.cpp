#include <iostream>
#include <vector>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        int left = 1, right = 2;
        int lp = 0, rp = n - 1;
        while (lp < rp)
        {
            nums[lp++] = left;
            nums[rp--] = right;
            left = left + 2;
            right = right + 2;
        }
        if (n & 1)
            nums[nums.size() / 2] = left;
        for (int i = 0; i < nums.size(); i++)
        {
            cout << nums[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}