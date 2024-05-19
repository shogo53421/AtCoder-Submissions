#include <bits/stdc++.h>
using namespace std;

int main()
{
    int now = 0;
    string str;
    cin >> str;
    string abc = "ABC";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == abc[now])
        {
            continue;
        }
        else
        {
            now++;
            if (now >= 3)
            {
                cout << "No" << endl;
                return 0;
            }
            if (str[i] != abc[now])
            {
                if (now != 2)
                {
                    now++;
                    if (str[i] != abc[now])
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                else
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
}