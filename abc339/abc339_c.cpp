#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long sum = 0;
    long long mi = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        mi = min(mi, sum);
    }
    cout << sum - mi << endl;
}