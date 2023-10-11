#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; ++i)
#define FORD(i, a, b) for(int i = a; i >= b; --i)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

int a[1005];
vi res;

void solve()
{
    int n; cin >> n;
    FOR(i, 0, n - 1) cin >> a[i];
    sort(a, a + n);
    int k = n/2;
    FOR(i, 0, k - 1)
    {
        res.pb(a[i]);
        res.pb(a[i + (n + 1)/2]);
    }
    if(n % 2 == 1) res.pb(a[k]);
    FOR(i, 0, n - 1) cout << res[i] << " ";
    res.clear();
    cout << endl;
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