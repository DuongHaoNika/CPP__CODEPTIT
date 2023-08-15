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

ll maxA = -1e9;

bool IsPrime(ll n)
{
    if(n < 2) return false;
    int sqr = sqrt(n);
    FOR(i, 2, sqr)
    {
        if(n % i == 0) return false;
    }
    return true;
}

void solve(ll n)
{
    int sqr = sqrt(n);
    for(ll i = 2; i <= sqr; i++)
    {
        if(n % i == 0)
        {
            if(IsPrime(i)) maxA = max(maxA, i);
            if(IsPrime(n / i)) maxA = max(maxA, n / i);
        }
    }
    cout << maxA << endl;
    maxA = -1;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        if(IsPrime(n)) cout << n << endl;
        else solve(n); 
    }
}