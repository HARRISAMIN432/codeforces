#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 3 != 0 || (a + b + c) / 3 < b)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
    }
}