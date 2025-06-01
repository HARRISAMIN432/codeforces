#include <iostream>
using namespace std;

main()
{
    int k, n, w, total_cost = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        total_cost += (k * i);
    (total_cost > n) ? cout << total_cost - n << endl : cout << 0 << endl;
}