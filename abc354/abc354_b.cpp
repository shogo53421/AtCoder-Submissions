#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> str[i] >> a;
        sum += a;
    }
    sort(str.begin(), str.end());
    cout << str[sum % n] << endl;
}