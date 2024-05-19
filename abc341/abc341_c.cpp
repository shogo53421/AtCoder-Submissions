#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, n, ans = 0;
    cin >> h >> w >> n;
    string str;
    vector<string> m(h);
    cin >> str;
    for (int i = 0; i < h; i++)
    {
        cin >> m[i];
    }
    for (int i = 1; i < h - 1; i++)
    {
        for (int j = 1; j < w - 1; j++)
        {
            if (m[i][j] == '#')
            {
                continue;
            }
            int now_i = i, now_j = j;
            bool ok = true;
            for (int k = 0; k < str.size(); k++)
            {
                if (str[k] == 'U')
                {
                    now_i--;
                }
                else if (str[k] == 'R')
                {
                    now_j++;
                }
                else if (str[k] == 'D')
                {
                    now_i++;
                }
                else
                {
                    now_j--;
                }
                if (m[now_i][now_j] == '#')
                {
                    ok = false;
                    break;
                }
            }
            if (ok)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}