#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        int seg = 0;
        bool isSeg = false;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0 && isSeg == false)
                isSeg = true;
            else if (nums[i] == 0 && isSeg == true)
            {
                isSeg = false;
                seg++;
            }
        }
        if (isSeg == true)
            seg++;
        cout << min(2, seg) << endl;
    }
    return 0;
}