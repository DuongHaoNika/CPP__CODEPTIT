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

ll gcd(ll a, ll b)
{
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

ll lcd(ll a, ll b)
{
    return a * b / gcd(a, b);
}

struct PhanSo
{
    ll a, b;
};

void nhap(PhanSo& x)
{
    cin >> x.a >> x.b;
    ll k = gcd(x.a, x.b);
    x.a /= k;
    x.b /= k;
}

PhanSo tong(PhanSo& x, PhanSo& y)
{
    PhanSo res;
    ll k = lcd(x.b, y.b);
    ll x1 = k / x.b, x2 = k / y.b;
    ll tu = x.a * x1 + y.a * x2;
    ll p = gcd(tu, k);
    res.a = tu / p;
    res.b = k / p;
    return res;
}

void in(PhanSo x)
{
    cout << x.a << "/" << x.b;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}