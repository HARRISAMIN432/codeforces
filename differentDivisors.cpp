#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= pow(n, 0.5); i++)
        if (n % i == 0)
            return false;
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = 1 + n;
        for (int i = temp; i < temp + 100; i++)
            if (isPrime(i))
            {
                temp = i;
                break;
            }
        int ans = temp;
        for (int i = temp + n; i < temp + n + 100; i++)
            if (isPrime(i))
            {
                ans *= i;
                break;
            }
        cout << ans << endl;
    }
}