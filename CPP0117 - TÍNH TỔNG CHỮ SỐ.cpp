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

int solve(int n)
{
    while(n >= 10)
    {
        int res = 0;
        while(n)
        {
            res += n % 10;
            n /= 10;
        }
        n = res;
    }
    return n;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout <<  solve(n) << endl;
    }
}