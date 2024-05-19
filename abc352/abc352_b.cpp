#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int now = 0;
    vector<int> a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i + now])
        {
            now++;
            i--;
        }
        else
        {
            a.push_back(now + i + 1);
        }
    }
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}