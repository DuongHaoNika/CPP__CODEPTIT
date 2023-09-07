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
    ll tu, mau;
    PhanSo(ll a, ll b)
    {
        this->tu = a;
        this->mau = b;
    }

    friend istream& operator >> (istream& in, PhanSo& ps)
    {
        in >> ps.tu >> ps.mau;
        return in;
    }

    friend ostream& operator << (ostream& out, const PhanSo& ps)
    {
        out << ps.tu << "/" << ps.mau;
        return out;
    }

    friend PhanSo& operator + (PhanSo& x, PhanSo y)
    {
        PhanSo res(1, 1);
        ll k = lcd(x.mau, y.mau);
        ll x1 = k / x.mau, x2 = k / y.mau;
        ll tu = x.tu * x1 + y.tu * x2;
        ll p = gcd(tu, k);
        res.tu = tu / p;
        res.mau = k / p;
        x = res;
        return x;
    }
};

int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}