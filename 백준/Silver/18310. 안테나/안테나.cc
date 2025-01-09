#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n = 0;
	cin >> n;
	vector<int>v(n);
	for (auto& i : v)
	{
		cin >> i;
	}
	sort(v.begin(), v.end());
	int left = 1, right = n - 1;
	for (auto& i : v)
	{
		if (left >= right)
		{
			cout << i;
			return 0;
		}
		left++;
		right--;
	}
	return 0;
}