#include <iostream>
#include <vector>
#include <set>
using namespace std;

main()
{
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b)
    {
        ans++;
        a *= 3;
        b *= 2;
    }
    cout << ans << endl;
}