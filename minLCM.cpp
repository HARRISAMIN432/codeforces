#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int n1 = 1, n2 = n - 1;
        for (int i = 2; i <= pow(n, 0.5); i++)
        {
            if (n % i == 0)
            {
                n1 = n / i;
                n2 = n - n1;
                break;
            }
        }
        cout << n1 << " " << n2 << endl;
    }
}