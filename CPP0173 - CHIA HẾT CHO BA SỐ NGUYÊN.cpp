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

ll lcm(ll a, ll b)
{
    ll tich = a * b;
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    return tich / (a + b);
}

int sopt(ll n)
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /= 10;
    }
    return cnt;
}

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll bcnn = lcm(a, b);
    bcnn = lcm(bcnn, c);
    int k = sopt(bcnn);
    if(k > d) cout << -1 << endl;
    else if(k == d) cout << bcnn << endl;
    else
    {
        ll left = pow(10, d - 1);
        ll right = 10 * left;
        if(bcnn <= left)
        {
            ll s = left / bcnn;
            ll tmp = bcnn;
            if(left % bcnn == 0) cout << left << endl;
            else 
            {
                bcnn *= s;
                bcnn += tmp;
                cout << bcnn << endl;
            }
        }
        else
        {
            if(bcnn < right) cout << bcnn << endl;
            else cout << -1 << endl;
        }
    }
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