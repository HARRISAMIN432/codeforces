#include <iostream>
using namespace std;

main()
{
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i < n; i++)
        if (s[i] == s[i - 1])
            ans++;
    cout << ans << endl;
}