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
        int n; cin >> n;
        int a[n + 2][n + 2];
        FOR(i, 1, n)
        {
            FOR(j, 1 , n) cin >> a[i][j];
        }
        FOR(i, 1, n)
        {
            if(i % 2 == 1)
            {
                FOR(j, 1, n) cout << a[i][j] << " ";
            }
            else 
            {
                FORD(j, n, 1) cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}