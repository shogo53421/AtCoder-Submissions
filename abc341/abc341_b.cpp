#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    long long s, t;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s >> t;
        a[i + 1] += (t * (a[i] / s));
    }
    cout << a[n - 1] << endl;
}