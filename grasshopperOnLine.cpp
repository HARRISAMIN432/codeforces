#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        (x % k == 0) ? cout << 2 << endl : cout << 1 << endl;
        (x % k == 0) ? cout << x - 1 << " " << 1 << endl : cout << x << endl;
    }
    return 0;
}