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

ll lcm(int a, int b)
{
    ll tich = a * b;
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    int tong = a + b;
    return tich / tong;
}

void solve()
{
    int m, n, a, b;
    int count = 0;
    cin >> m >> n >> a >> b;
    FOR(i, m, n)
    {
        if(i % a == 0) count++;
        if(i % b == 0) count++;
        if(i % a == 0 && i % b == 0) count--;
    }
    cout << count << endl;
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