#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        vector<vector<int>> queries(q, vector<int>(3));
        for (int i = 0; i < q; i++)
            cin >> queries[i][0] >> queries[i][1] >> queries[i][2];
        vector<int> prefix(n);
        prefix[0] = nums[0];
        for (int i = 1; i < n; i++)
            prefix[i] = prefix[i - 1] + nums[i];
        for (int i = 0; i < q; i++)
            ((prefix[n - 1] - prefix[queries[i][1] - 1] + ((queries[i][0] > 1) ? prefix[queries[i][0] - 2] : 0)) % 2 == 1) ? (((queries[i][2] & 1) && (!((queries[i][1] - queries[i][0]) & 1))) ? cout << "NO" << endl : cout << "YES" << endl) : (((queries[i][2] & 1) && (!((queries[i][1] - queries[i][0]) & 1))) ? cout << "YES" << endl : cout << "NO" << endl);
    }
}