#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll>pll;
typedef tuple<ll, ll, ll>ti;
const char* yes = "Yes";
const char* no = "No";

int main(void)
{
	cin.tie(0)->ios::sync_with_stdio(0);
	int l = 0, r = 0;
	cin >> l >> r;
	if (l && r)
	{
		cout << "Invalid";
	}
	else if (l == 1)
	{
		cout << yes;
	}
	else if(r == 1)
	{
		cout << no;
	}
	else
	{
		cout << "Invalid";
	}
	return 0;
}