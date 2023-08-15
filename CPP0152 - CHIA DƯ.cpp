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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

void solve()
{
    int a, m; cin >> a >> m;
    FOR(i, 0, m - 1)
    {
        if((a * i) % m == 1)
        {
            cout << i << endl;
            return;
        }
    }
    cout << -1 << endl;
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