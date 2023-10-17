#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

void solve(string s1, string s2)
{
	int len = min(s1.sz, s2.sz);
	int maxLen = max(s1.sz, s2.sz);
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	string res;
	int nho = 0;
	FOR(i, 0, len - 1)
	{
		int k = (s1[i] - '0') + (s2[i] - '0') + nho;
		nho = k / 10;
		k %= 10;
		res += (k + '0');
	}
	if(s1.sz > s2.sz)
	{
	      FOR(i, len, maxLen - 1)
	      {
	            int k = (s1[i] - '0') + nho;
      		nho = k / 10;
      		k %= 10;
      		res += (k + '0');
	      }
	}
	else if(s2.sz > s1.sz)
	{
	      FOR(i, len, maxLen - 1)
	      {
	            int k = (s2[i] - '0') + nho;
      		nho = k / 10;
      		k %= 10;
      		res += (k + '0');
	      }
	}
	if(nho == 1) res += "1";
	reverse(res.begin(), res.end());
	cout << res << endl;
}

int main()
{
	faster();
	int t; cin >> t;
	while(t--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		solve(s1, s2);
	}
}
