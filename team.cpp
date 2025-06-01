#include <iostream>

using namespace std;

main()
{
    int n, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c > 1)
            ans++;
    }
    cout << ans << endl;
}