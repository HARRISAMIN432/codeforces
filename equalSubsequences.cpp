#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string ans;
        for (int i = 0; i < n; i++)
            (i < k) ? ans += '1' : ans += '0';
        cout << ans << endl;
    };
}