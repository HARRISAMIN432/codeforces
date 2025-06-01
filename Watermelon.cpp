#include <iostream>

using namespace std;

main()
{
    int w;
    cin >> w;
    (!(w & 1) && w > 3) ? cout << "Yes" << endl : cout << "No" << endl;
}