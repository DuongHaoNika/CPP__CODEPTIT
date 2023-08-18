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

bool nt[100005] = {};

void init()
{
    FOR(i, 2, 100005) nt[i] = true;
    nt[0] = nt[1] = false;
    FOR(i, 1, 100005)
    {
        if(nt[i])
        {
            for(int j = 2 * i; j <= 10005; j += i) nt[j] = false;
        }
    }
}

void solve()
{
    int l, r; cin >> l >> r;
    int cnt = 0;
    FOR(i, l, r)
    {
        if(nt[i]) cnt++; 
    }
    cout << cnt << endl;
}

int main()
{
    faster();
    init();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}