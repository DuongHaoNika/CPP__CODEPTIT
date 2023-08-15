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

void solve()
{
    int m, s;
    cin >> m >> s;
    if((s == 0 && m != 1) || s > 9 * m) 
    {
        cout << "-1 -1";
        return;
    }
    else
    {
        int c[102] = {};
        int d[102] = {};
        int n = s;
        c[1] = 1;
        n--;
        int u = n / 9;
        n -= 9 * u;
        FORD(i, m, m - u + 1) c[i] = 9;
        c[m - u] += n;
        FOR(i, 1, m) cout << c[i];
        
        cout << " ";
        
        n = s;
        int k = n/9;
        if(k > 0)
        {
            FOR(i, 1, k) cout << 9;
            n -= k * 9;
            if(n) cout << n;
            FOR(i, k + 2, m) cout << 0;
        }
        else
        {
            cout << n;
            FOR(i, 2, m) cout << 0;
        }
    }
}


int main()
{
    faster();
    solve();
}