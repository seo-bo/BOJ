#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void)
{
	cin.tie(0)->sync_with_stdio(0);
	int T = 0;
	cin >> T;
	while (T--)
	{
		int n = 0, m = 0;
		cin >> n >> m;
		vector<string>v(n);
		int cur = 0, cnt = 0;
		for (auto& i : v)
		{
			cin >> i;
		}
		for (auto& i : v)
		{
			if (cur + i.size() <= m)
			{
				cur += i.size();
				cnt++;
			}
			else
			{
				break;
			}
		}
		cout << cnt << '\n';
	}
}
