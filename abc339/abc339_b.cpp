#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    int vec = 1003;
    string tmp = "";
    int now_i = 0, now_j = 0;
    vector<string> str(h);
    for (int i = 0; i < w; i++)
    {
        tmp += '.';
    }
    for (int i = 0; i < h; i++)
    {
        str[i] = tmp;
    }
    for (int i = 0; i < n; i++)
    {
        if (str[now_i][now_j] == '.')
        {
            vec++;
            str[now_i][now_j] = '#';
            now_j += dx[vec % 4];
            now_i += dy[vec % 4];
        }
        else
        {
            vec--;
            str[now_i][now_j] = '.';
            now_j += dx[vec % 4];
            now_i += dy[vec % 4];
        }
        if (now_j < 0)
        {
            now_j = w - 1;
        }
        else if (now_j >= w)
        {
            now_j = 0;
        }
        if (now_i < 0)
        {
            now_i = h - 1;
        }
        else if (now_i >= h)
        {
            now_i = 0;
        }
    }
    for (int i = 0; i < h; i++)
    {
        cout << str[i] << endl;
    }
}