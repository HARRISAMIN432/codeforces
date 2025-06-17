#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        if (num <= 10)
            cout << num << endl;
        else if (num < 100)
            cout << 9 + (num / 10) << endl;
        else if (num < 1000)
            cout << 18 + (num / 100) << endl;
        else if (num < 10000)
            cout << 27 + (num / 1000) << endl;
        else if (num < 100000)
            cout << 36 + (num / 10000) << endl;
        else
            cout << 45 + (num / 100000) << endl;
    }
    return 0;
}