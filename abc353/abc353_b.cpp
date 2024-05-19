#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    int now = k;
    b.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (b[b.size() - 1] + a[i] <= k)
        {
            b[b.size() - 1] += a[i];
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    cout << b.size() << endl;
}