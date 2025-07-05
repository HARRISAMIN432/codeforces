#include <iostream>
using namespace std;

void factor(int n, int &two, int &three)
{
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            two++;
            n /= 2;
        }
        else if (n % 3 == 0)
        {
            three++;
            n /= 3;
        }
        else
        {
            two = -1, three = -1;
            return;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
            cout << 0 << endl;
        else if (n == 3)
            cout << 2 << endl;
        else if (n < 6)
            cout << -1 << endl;
        else
        {
            int two = 0, three = 0;
            factor(n, two, three);
            if (two == -1 || two > three)
                cout << -1 << endl;
            else if (two == three)
                cout << two << endl;
            else
                cout << three + three - two << endl;
        }
    }
}