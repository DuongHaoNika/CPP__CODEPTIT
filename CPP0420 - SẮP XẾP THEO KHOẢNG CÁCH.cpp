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
#define pii pair<int, int>
#define endl '\n'
#define base 31
const ll MOD = 1000000007;

struct DS
{
    int val, idx, range;
};

bool cmp(DS x, DS y)
{
    if(x.range == y.range) return x.idx < y.idx;
    return x.range < y.range;
}

int main()
{
    faster();
    int t; cin >> t;
    int n, x; 
    while(t--)
    {
        cin >> n >> x;
        DS ds[n + 5];
        FOR(i, 0, n - 1) 
        {
            cin >> ds[i].val;
            ds[i].idx = i;
            ds[i].range = abs(ds[i].val - x);
        }
        sort(ds, ds + n, cmp);
        FOR(i, 0, n - 1) cout << ds[i].val << ' ';
        cout << endl;
    }
}