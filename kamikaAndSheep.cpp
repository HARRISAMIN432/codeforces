#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maxi = 0, mini = INT_MAX, num;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (num < mini)
                mini = num;
            if (num > maxi)
                maxi = num;
        }
        cout << maxi - mini << endl;
    }
}