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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

bool IsPrime(int n)
{
    if(n < 2) return false;
    int sqr = sqrt(n);
    FOR(i, 2, sqr)
    {
        if(n % i == 0) return false;
    }
    return true;
}

int gcd(int a, int b)
{
    while(a * b != 0)
    {
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main()
{
	faster();
    int t; cin >> t;
    while(t--)  
    {
        int n; cin >> n;
        int res = 0;
        FOR(i, 1, n)
        {
            if(gcd(i, n) == 1) res++;
        }
        if(IsPrime(res)) cout << 1;
        else cout << 0;
        cout << endl;
    }
}