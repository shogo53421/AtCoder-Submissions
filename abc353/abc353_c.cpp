#include <bits/stdc++.h>
using namespace std;

long long amari = 100000000;

int main()
{
    long long n;
    long long ans = 0;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += (a[i] * (n - 1));
    }
    sort(a.begin(), a.end());
    long long minus = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(a.begin(), a.end(), amari - a[i]);
        // cerr << *it << endl;
        if (it != a.end())
        {
            minus += (a.end() - it);
            if (*it <= a[i])
            {
                minus--;
            }
        }
    }
    cerr << minus << endl;
    ans -= (minus / 2) * amari;
    cout << ans << endl;
}