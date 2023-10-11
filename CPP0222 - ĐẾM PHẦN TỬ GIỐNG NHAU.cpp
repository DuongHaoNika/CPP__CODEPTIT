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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int a[n + 2][n + 2];
        map<int, int> m;
        FOR(i, 1, n)
        {
            FOR(j, 1, n) cin >> a[i][j];
        }
        FOR(i, 1, n)
        {
            if(i == 1)
            {
                FOR(j, 1, n) 
                {
                    if(m[a[i][j]] == 0) m[a[i][j]]++;
                }
            }
            else
            {
                FOR(j, 1, n)
                {
                    if(m[a[i][j]] > 0 && m[a[i][j]] == i - 1)
                    {
                        m[a[i][j]]++;
                    }
                }
            }
        }
        int res = 0;
        for(auto i : m)
        {
            if(i.se == n) res++;
        }
        cout << res << endl;
    }
}