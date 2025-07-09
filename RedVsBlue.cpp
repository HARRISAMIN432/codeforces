#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n, r, b;
        cin >> n >> r >> b;
        vector<int> endPoints(b, 0);
        for (int i = 0; i < b; i++)
            endPoints[i] = n * (float(i + 1) / (b + 1));
        int iter = 0;
        string ans;
        for (int i = 0; i < n; i++)
        {
            if (iter < endPoints.size() && i == endPoints[iter])
            {
                ans += 'B';
                iter++;
            }
            else
                ans += 'R';
        }
        cout << ans << endl;
    }
}