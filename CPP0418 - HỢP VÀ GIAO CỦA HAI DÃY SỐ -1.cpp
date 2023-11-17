#include <bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define TIME "Time: " << (double)clock() / 1000 << " s";
#define FOR(i, a, b) for (int i = a; i <= b; ++i)
#define FORD(i, a, b) for (int i = a; i >= b; --i)
#define F(i, a, b) for (int i = a; i < b; ++i)
#define FD(i, a, b) for (int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'
#define maxn 100005

int main()
{
    faster();
    int t;
    cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n + 2], b[m + 2];
        set<int> s;
        map<int, int> m1;
        map<int, int> m2;
        FOR(i, 0, n - 1) 
        {
            cin >> a[i];
            m1[a[i]]++;
            s.insert(a[i]);
        }
        FOR(i, 0, m - 1)
        {
            cin >> b[i];
            m2[b[i]]++;
            s.insert(b[i]);
        }
        for(set<int>::iterator it = s.begin(); it != s.end(); it++) cout << *it << " ";
        cout << endl;
        FOR(i, 0, n - 1)
        {
            if(m1[a[i]] > 0 && m2[a[i]] > 0) cout << a[i] << " ";
        }
        cout << endl;
    }
}