#include <iostream>
#include <vector>
using namespace std;

vector<int> unsortedElementsPositions(vector<int> &nums)
{
    vector<int> pos;
    for (int i = 1; i < nums.size(); i++)
        if (nums[i] < nums[i - 1])
            pos.push_back(i);
    return pos;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ss(n);
        for (int i = 0; i < n; i++)
            cin >> ss[i];
        vector<int> pos = unsortedElementsPositions(ss);
        if (pos.size() == 0)
        {
            cout << ss.size() << endl;
            for (int i = 0; i < ss.size(); i++)
            {
                cout << ss[i];
                if (i < ss.size() - 1)
                    cout << ' ';
            }
            cout << endl;
            continue;
        }
        cout << ss.size() + pos.size() << endl;
        int posIdx = 0;
        for (int i = 0; i < ss.size(); i++)
        {
            if (pos[posIdx] == i)
            {
                cout << 1 << ' ';
                if (posIdx != pos.size() - 1)
                    posIdx++;
            }
            cout << ss[i];
            if (i < ss.size() - 1)
                cout << ' ';
        }
        cout << endl;
    }
    return 0;
}