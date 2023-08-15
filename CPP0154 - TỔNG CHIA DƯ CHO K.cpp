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
    int a;
    ll m;
    cin >> a >> m;
    ll res = a / m;
    ll k = res;
    res *= m * (m - 1) / 2;
    a -= m * k;
    FOR(i, 1, a)
    res += i % m;
    if(res == m) cout << 1 << endl;
    else cout << 0 << endl;
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