#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    vector<int> a(n + 10);
    vector<pair<int, int>> b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        while (a[i] != i)
        {
            tmp = a[i];
            swap(a[i], a[tmp]);
            b.push_back({i, tmp});
            cnt++;
        }
    }
    cout << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << b[i].first << " " << b[i].second << endl;
    }
}