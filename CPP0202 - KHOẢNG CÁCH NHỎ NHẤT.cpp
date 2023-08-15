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
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

void solve()
{
    vi v;
    int tmp;
    int n; cin >> n;
    FOR(i, 0, n - 1)
    {
        cin >> tmp;
        v.pb(tmp);
    }
    sort(v.begin(), v.end());
    int minRes = INT_MAX;
    FOR(i, 1, n - 1)
    {
        int k = abs(v[i] - v[i - 1]);
        minRes = min(minRes, k);
    }
    cout << minRes << endl;
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}