#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        p.push_back({tmp, i + 1});
    }
    sort(p.begin(), p.end());
    set<int> x;
    for (int i = 0; i < k; i++)
    {
        x.insert(p[i].second);
    }
    auto mi = x.begin();
    auto ma = x.end();
    ma--;
    int ans = *ma - *mi;
    for (int i = 0; i < n - k; i++)
    {
        x.erase(p[i].second);
        x.insert(p[i + k].second);
        mi = x.begin();
        ma = x.end();
        ma--;
        ans = min(ans, *ma - *mi);
    }
    cout << ans << endl;
}