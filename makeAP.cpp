#include <iostream>
#include <numeric>
using namespace std;

int gcd(int a, int b)
{
    if (a <= 0 || b <= 0)
        return 0;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        cout << ((((c + a) % 2 == 0 && gcd((c + a) / 2, b) == b) || (a < b && b >= c && gcd(b + b - c, a) == a) || (a < b && c > b && gcd(b - c + b, a) == a) || (b > c && b >= a && gcd(b - a + b, c) == c) || (b > c && b < a && gcd(b - a + b, c) == c)) ? "YES" : "NO") << endl;
    }
}