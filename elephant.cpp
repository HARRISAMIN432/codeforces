#include <iostream>
using namespace std;

main()
{
    int x, ans = 0;
    cin >> x;
    ans += x / 5;
    ans += (x % 5) ? 1 : 0;
    cout << ans << endl;
}