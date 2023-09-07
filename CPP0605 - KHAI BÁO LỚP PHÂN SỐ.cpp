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

class PhanSo
{
public: 
    ll tu, mau;
    PhanSo(ll tu, ll mau)
    {
        this->tu = tu;
        this->mau = mau;
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

    void rutgon()
    {
        ll ucln = gcd(tu, mau);
        tu /= ucln;
        mau /= ucln;
    }
};

int main() {
	PhanSo p(1,1);
	cin >> p;
	p.rutgon();
	cout << p;
	return 0;
}