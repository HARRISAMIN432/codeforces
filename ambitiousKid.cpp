#include <iostream>
using namespace std;

main()
{
    int n;
    cin >> n;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        ans = min(ans, abs(0 - num));
    }
    cout << ans << endl;
}