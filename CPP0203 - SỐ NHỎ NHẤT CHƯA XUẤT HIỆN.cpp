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
        if(tmp > 0) v.pb(tmp);
    }
    sort(v.begin(), v.end());
    if(v[0] != 1) cout << 1 << endl;
    else
    {
        int len = v.size();
        FOR(i, 0, len - 2)
        {
            if(v[i + 1] - v[i] > 1)
            {
                cout << v[i] + 1 << endl;;
                return;
            }
        }
        cout << v[len - 1] + 1 << endl;
    }
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