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

bool IsPrime(int n)
{
    if(n < 2) return 0;
    int sqr = sqrt(n);
    FOR(i, 2, sqr) 
    {
        if(n % i == 0) return 0;
    }
    return 1;
}

void solve()
{
    ll n; cin >> n;
    int cnt = 0;
    int sqr = sqrt(n);
    FOR(i, 1, sqr)
    {
        if(IsPrime(i)) cnt++;
    }
    cout << cnt << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}