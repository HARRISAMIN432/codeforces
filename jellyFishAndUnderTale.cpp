#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> tools(n);
        for (int i = 0; i < n; i++)
            cin >> tools[i];
        long long ans = 0;
        for (int tool : tools)
            ans += min(tool, a);
        cout << b + ans - 1 << endl;
    }
    return 0;
}