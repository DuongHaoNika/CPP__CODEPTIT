#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'
#define maxn 100005

int main()
{
    faster();
    int t; cin >> t;
    while(t--)  
    {
        double res = 0;
        int n; cin >> n;
        double x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2;
        n -= 2;
        while(n--)
        {
            cin >> x3 >> y3;
            res += 0.5*abs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
            x2 = x3, y2 = y3;
        }
        cout << fixed << setprecision(3) << res << endl;
    }
}