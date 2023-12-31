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

ll solve(ll x, ll y, ll p)
{
    if(y == 1) return x;
    if(y % 2 == 1) return (x * solve(x, y / 2, p)) % p * solve(x, y / 2, p) % p;
    else return solve(x, y / 2, p) % p * solve(x, y / 2, p) % p;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        ll x, y, p; cin >> x >> y >> p;  
        cout << solve(x, y, p) << endl; 
    }
}