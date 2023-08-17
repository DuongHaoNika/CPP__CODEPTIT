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

struct PhanSo
{
    ll a, b;
};

void nhap(PhanSo& x)
{
    cin >> x.a >> x.b;
}

void rutgon(PhanSo& x)
{
    ll tmp = gcd(x.a, x.b);
    x.a /= tmp;
    x.b /= tmp;
}

void in(PhanSo x)
{
    cout << x.a << "/" << x.b;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}