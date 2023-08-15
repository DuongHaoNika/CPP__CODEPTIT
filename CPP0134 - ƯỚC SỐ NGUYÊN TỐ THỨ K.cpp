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
    
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        vi res;
        int sqr = sqrt(n);
        FOR(i, 2, sqr)
        {
            if(n % i == 0)
            {
                while(n % i == 0)
                {
                    n /= i;
                    res.pb(i);
                }
            }
        }
        if(n > 1) res.pb(n);
        if(k > res.size()) cout << -1 << endl;
        else cout << res[k - 1] << endl;
    }
}