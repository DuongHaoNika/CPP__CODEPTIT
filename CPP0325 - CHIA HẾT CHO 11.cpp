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

void solve()
{
    string s; cin >> s;
    int len = s.size();
    int cnt1 = 0, cnt2 = 0;
    FOR(i, 0, len - 1)
    {
        if(i % 2 == 0) cnt1 += s[i] - '0';
        else cnt2 += s[i] - '0';
    }
    int res = abs(cnt1 - cnt2);
    if(res % 11 == 0) cout << 1 << endl;
    else cout << 0 << endl;
}


int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}