#include <iostream>
#include <vector>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> nums(n);
        int first1 = -1, last1 = -1;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == 1)
            {
                if (first1 == -1)
                {
                    first1 = i;
                    last1 = i;
                }
                last1 = i;
            }
        }
        if (last1 - first1 < x)
        {
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
}