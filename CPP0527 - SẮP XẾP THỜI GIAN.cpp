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

struct A
{
    int timer;
    int idx;
    int h, m, s;
};

bool cmp(A x, A y)
{
    return x.timer < y.timer;
}

int main()
{
    faster();
    int n; cin >> n;
    int a[n + 2][n + 2];
    A aa[n + 2];
    FOR(i, 0, n - 1)
    {
        aa[i].idx = i;
        aa[i].timer = 0;
        cin >> aa[i].h >> aa[i].m >> aa[i].s;
        aa[i].timer += aa[i].h * 3600 + aa[i].m*60 + aa[i].s;
    }
    sort(aa, aa + n, cmp);
    FOR(i, 0, n - 1)
    {
        cout << aa[i].h << " " << aa[i].m << " " << aa[i].s << endl;;
    }
}