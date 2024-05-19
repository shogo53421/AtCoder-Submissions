#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n, ma = 0, in = 0, sum = 0;
	cin >> n;
	vector<long long> a(n), b(n);
	vector<long long> c(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		sum += a[i];
		c[i] = b[i] - a[i];
		if (ma < c[i])
		{
			ma = c[i];
			in = i;
		}
	}
	cout << sum + c[in] << endl;
}