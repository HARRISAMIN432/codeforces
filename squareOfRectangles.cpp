#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        cout << (((l1 == l2 && l1 == l3 && b1 + b2 + b3 == l1) || (b1 == b2 && b1 == b3 && l1 + l2 + l3 == b1) || (l1 == l2 + l3 && b2 == b3 && l1 == b1 + b2) || (l3 == l1 + l2 && b2 == b1 && l3 == b3 + b2) || (l2 == l1 + l3 && b1 == b3 && l2 == b2 + b1) || (b1 == b2 + b3 && l2 == l3 && b1 == l1 + l2) || (b2 == b1 + b3 && l1 == l3 && b2 == l2 + l3) || (b3 == b1 + b2 && l1 == l2 && b3 == l3 + l2)) ? "YES" : "NO") << endl;
    }
    return 0;
}