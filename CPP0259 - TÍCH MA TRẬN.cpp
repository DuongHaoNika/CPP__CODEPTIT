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

int a[1000005];

int main()
{
    faster();
    int m, n, p;
    cin >> m >> n >> p;
    int a[m + 2][n + 2];
    int b[n + 2][p + 2];
    int c[m + 2][p + 2];
    FOR(i, 1, m)
    {
        FOR(j, 1, n) cin >> a[i][j];
    }
    FOR(i, 1, n)
    {
        FOR(j, 1, p) cin >> b[i][j];
    }
    FOR(i, 1, m)
    {
        FOR(j, 1, p)
        {
            int res = 0;
            FOR(u, 1, n)
            {
                res += a[i][u] * b[u][j];
            }
            c[i][j] = res;
        }
    }
    FOR(i, 1, m)
    {
        FOR(j, 1, p) cout << c[i][j] << " ";
        cout << endl;
    }
}