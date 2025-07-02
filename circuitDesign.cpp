#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<bool>> graph(n, vector<bool>(n));
    while (m--)
    {
        int u, v;
        cin >> u >> v;
        for (int i = 0; i < n; i++)
            if (graph[u][i] == 1 && graph[v][i] == 1)
                ans++;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    cout << ans << endl;
    return 0;
}
