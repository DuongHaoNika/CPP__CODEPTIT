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
        int n, q; cin >> n >> q;
        int a[n + 5];
        int sum[10005] = {};
        FOR(i, 1, n) 
        {
            cin >> a[i];
            if(i == 1) sum[i] = a[i];
            else sum[i] = sum[i - 1] + a[i];
        }
        while(q--)
        {
            int l, r; cin >> l >> r;
            int res = sum[r] - sum[l - 1];
            cout << res << endl;
        }
    }
}