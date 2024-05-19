#include <bits/stdc++.h>
using namespace std;

unsigned long long mod = 998244353;

unsigned long long keta(unsigned long long a)
{
    int k = 1;
    while (a >= 10)
    {
        k++;
        a /= 10;
    }
    return k;
}

unsigned long long power(unsigned long long a, unsigned long long b)
{
    unsigned long long sum = a;
    for (int i = 0; i < b; i++)
    {
        sum *= 10;
    }
    return sum;
}

int main()
{
    int n;
    unsigned long long ans = 0;
    cin >> n;
    vector<unsigned long long> a(n);
    vector<unsigned long long> k(n);
    map<unsigned long long, unsigned long long> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        k[i] = keta(a[i]);
        m[k[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        m[k[i]]--;
        if (m[k[i]] == 0)
        {
            m.erase(k[i]);
        }
        for (const auto& [key, value] : m)
        {
            // cout << key << " " << value << " " << power(a[i], key) << endl;
            ans += ((power(a[i], key) % mod) * value);
            ans %= mod;
        }
    }
    for (int i = 1; i < n; i++)
    {
        ans += (a[i] * i);
        ans %= mod;
    }
    ans %= mod;
    cout << ans << endl;
}