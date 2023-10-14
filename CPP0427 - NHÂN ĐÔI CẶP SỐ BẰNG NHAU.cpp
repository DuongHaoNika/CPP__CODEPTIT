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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 5];
        FOR(i, 0, n - 1) cin >> a[i];
        vi res;
        FOR(i, 0, n - 2)
        {
            if(a[i] == a[i + 1] && a[i] != 0)
            {
                res.pb(2*a[i]);
                a[i + 1] = 0;
                i++;
            }
            else if(a[i] != a[i + 1] && a[i] != 0) res.pb(a[i]);
        }
        if(a[n - 1] != 0) res.pb(a[n - 1]);
        int idx = res.sz;
        while(idx++ <= n) res.pb(0);
        FOR(i, 0, n - 1) cout << res[i] << " ";
        cout << endl;
    }
}