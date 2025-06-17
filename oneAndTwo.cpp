#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int numberOfTwos = 0;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if (nums[i] == 2)
                numberOfTwos++;
        }
        if (numberOfTwos & 1)
            cout << -1 << endl;
        else if (numberOfTwos == 0)
            cout << 1 << endl;
        else
        {
            int idx = -1, temp = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 2)
                    temp++;
                if (temp == numberOfTwos / 2)
                {
                    idx = i;
                    break;
                }
            }
            cout << idx + 1 << endl;
        }
    }
    return 0;
}