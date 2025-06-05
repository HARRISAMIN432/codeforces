#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> grid(10);
        vector<int> targets;
        for (int i = 0; i < 10; i++)
            cin >> grid[i];
        for (int i = 0; i < 10; i++)
            for (int j = 0; j < 10; j++)
                if (grid[i][j] == 'X')
                    targets.push_back(i * 10 + j);
        int ans = 0;
        for (int target : targets)
        {
            int row = target / 10, col = target % 10;
            if ((row == 0 || row == 9) || ((row >= 1 && row <= 8) && (col == 0 || col == 9)))
            {
                ans += 1;
                continue;
            }
            else if (((row == 1 || row == 8) && (col >= 1 && col <= 8)) || ((row >= 2 && row <= 7) && (col == 1 || col == 8)))
            {
                ans += 2;
                continue;
            }
            else if (((row == 2 || row == 7) && (col >= 2 && col <= 7)) || ((row >= 3 && row <= 6) && (col == 2 || col == 7)))
            {
                ans += 3;
                continue;
            }
            else if (((row == 3 || row == 6) && (col >= 3 && col <= 6)) || ((row >= 4 && row <= 5) && (col == 3 || col == 6)))
            {
                ans += 4;
                continue;
            }
            else
                ans += 5;
        }
        cout << ans << endl;
    }
}