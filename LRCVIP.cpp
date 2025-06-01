#include <iostream>
#include <vector>
#include <numeric>
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
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        bool same = true;
        for (int i = 1; i < nums.size(); i++)
            if (nums[i] != nums[i - 1])
            {
                same = false;
                break;
            }
        if (same)
        {
            cout << "No" << endl;
            continue;
        }
        bool answerFound = false;
        for (int i = 0; i < nums.size() - 1; i++)
        {
            int gcdB = nums[0];
            for (int k = 1; k <= i; k++)
                gcdB = gcd(gcdB, nums[k]);
            int gcdC = nums[i + 1];
            for (int k = i + 2; k < nums.size(); k++)
                gcdC = gcd(gcdC, nums[k]);
            if (gcdB != gcdC)
            {
                answerFound = !answerFound;
                cout << "Yes" << endl;
                for (int k = 0; k <= i; k++)
                    cout << 1 << " ";
                for (int k = i + 1; k < nums.size(); k++)
                {
                    cout << 2;
                    if (k < nums.size() - 1)
                        cout << " ";
                }
                cout << endl;
                break;
            }
        }
        if (!answerFound)
            cout << "No" << endl;
    }
}