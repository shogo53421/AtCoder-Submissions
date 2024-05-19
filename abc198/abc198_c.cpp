#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r, x, y;
    cin >> r >> x >> y;
    double d = sqrt(x * x + y * y);
    if (d < r)
    {
        cout << 2 << endl;
    }
    else if (d == r)
    {
        cout << 1 << endl;
    }
    else if (d == int(d) && int(d) % int(r) == 0)
    {
        cout << int(d / r) << endl;
    }
    else
    {
        cout << int(d / r) + 1 << endl;
    }
}