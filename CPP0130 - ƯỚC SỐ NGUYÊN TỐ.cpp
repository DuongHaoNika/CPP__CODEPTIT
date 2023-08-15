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
    FOR(i, 2, sqr)
    {
        if(n % i == 0)
        {
            int cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
                cout << i << " ";
            }
        }
    }
    if(n > 1) cout << n;
    cout << endl;
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