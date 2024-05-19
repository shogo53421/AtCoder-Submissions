#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> two(40);
    two[0] = 1;
    for (int i = 0; i < 39; i++)
    {
        two[i + 1] = two[i] * 2;
    }
    for (int i = 0; i < 35; i++)
    {
        if (n == two[i] - 1)
        {
            cout << i + 1 << endl;
            return 0;
        }
        else if (n < two[i])
        {
            cout << i << endl;
            return 0;
        }
    }
}