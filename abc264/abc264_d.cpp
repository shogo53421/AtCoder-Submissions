#include <bits/stdc++.h>
using namespace std;

int main()
{
    string atco = "atcoder";
    string str;
    cin >> str;
    vector<int> a(7);
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (str[i] == atco[j])
            {
                a[i] = j + 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}