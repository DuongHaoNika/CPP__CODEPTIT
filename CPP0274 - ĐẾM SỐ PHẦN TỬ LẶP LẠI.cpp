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

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int tmp;
        map<int, int> m;
        int res = 0;
        FOR(i, 1, n)
        {
            cin >> tmp;
            m[tmp]++;
        }
        for(map<int, int>::iterator it = m.begin(); it != m.end(); it++)
        {
            if(it->second >= 2) res += it->second;
        }
        cout << res << endl;
    }
}