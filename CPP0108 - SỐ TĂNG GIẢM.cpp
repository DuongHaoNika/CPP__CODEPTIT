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
bool check(ll n)
{
    string s;
    while(n)
    {
        s += (n % 10) + '0';
        n /= 10;
    }
    s.reserve();
    int idx1 = 0, idx2 = 0;
    FOR(i, 1, s.sz - 1)
    {   
        if(s[i] > s[i - 1])
        {
            idx2 = 1;
            if(idx1 == 1) return false;
        }
        else if(s[i] < s[i - 1])
        {
            idx1 = 1;
            if(idx2 == 1) return false;
        }
        else return false;
    }
    return true;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll left = pow(10, n - 1);
        ll right = pow(10, n) - 1;
        int cnt = 0;
        for(ll i = left; i <= right; i++)   
        {
            if(check(i)) 
            {
                if(IsPrime(i)) cnt++;
            }
        }
        cout << cnt << endl;
    }
}