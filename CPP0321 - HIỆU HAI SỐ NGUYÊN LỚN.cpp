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
	if(s1.sz < s2.sz) swap(s1, s2);
	else if(s1.sz == s2.sz)
	{
		if(s1 < s2 ) swap(s1, s2);
	}
	//cout << s1.sz << " " << s2.sz << endl;
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int len = s2.sz;
	int maxLen = s1.sz;
	int muon = 0;
	string res;
	FOR(i, 0, len - 1)
	{
		int k = (s1[i] - '0') - (s2[i] - '0') - muon;
		if(k < 0)
		{
			k += 10;
			muon = 1;
		}
		else muon = 0;
		//cout << k << " ";
		res += (k + '0');
	}
	FOR(i, len, maxLen - 1)
	{
		int k = (s1[i] - '0') - muon;
		if(k < 0) 
		{
			k += 10;
			muon = 1;
		}
		else muon = 0;
		res += (k + '0');
	}
	int idx = maxLen - 1;
	FORD(i, maxLen - 1, 0) cout << res[i];
	cout << endl;
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