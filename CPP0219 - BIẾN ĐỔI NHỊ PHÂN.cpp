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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[n + 2][m + 2];
        int b[n + 2][m + 2];
        FOR(i, 1, n)
        {
            FOR(j, 1 , m) 
            {
                cin >> a[i][j];
                b[i][j] = a[i][j];
            }
        }
        FOR(i, 1, n)
        {
            FOR(j, 1, m)
            {
                if(b[i][j] == 1)
                {
                    FOR(u, 1, m) a[i][u] = 1;
                    FOR(u, 1, n) a[u][j] = 1;
                }
            }
        }
        FOR(i, 1, n)
        {
            FOR(j, 1, m) cout << a[i][j] << " ";
            cout << endl;
        }
    }
}