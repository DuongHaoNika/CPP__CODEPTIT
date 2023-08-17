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

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        ll max1 = -1e9, min2 = 1e9;
        int m, n; cin >> m >> n;
        ll tmp;
        FOR(i, 1, m)
        {
            cin >> tmp;
            max1 = max(tmp, max1);
        }
        FOR(i, 1, n)
        {
            cin >> tmp;
            min2 = min(tmp, min2);
        }
        cout << max1 * min2 << endl;
    }
}