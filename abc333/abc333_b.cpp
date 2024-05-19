#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int l_a = 0, l_b;
    vector<int> a(2), b(2);
    a[0] = (s[0] - 'A');
    a[1] = (s[1] - 'A');
    b[0] = (t[0] - 'A');
    b[1] = (t[1] - 'A');
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a[0] == 0 && a[1] == 4)
    {
        l_a = 1;
    }
    else
    {
        if (a[1] - a[0] == 1)
        {
            l_a = 1;
        }
        else
        {
            l_a = 2;
        }
    }
    if (b[0] == 0 && b[1] == 4)
    {
        l_b = 1;
    }
    else
    {
        if (b[1] - b[0] == 1)
        {
            l_b = 1;
        }
        else
        {
            l_b = 2;
        }
    }
    if (l_a == l_b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}