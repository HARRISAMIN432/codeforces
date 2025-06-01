#include <iostream>
#include <vector>

using namespace std;

main()
{
    vector<vector<int>> v(5, vector<int>(5, 0));
    int oneRow = -1, oneCol = -1;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> v[i][j];
            if (v[i][j] == 1)
            {
                oneRow = i;
                oneCol = j;
            }
        }
    }
    int ans = 0;
    ans += abs(oneRow - 2) + abs(oneCol - 2);
    cout << ans << endl;
}