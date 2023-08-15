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
        string s; cin >> s;
        int k; cin >> k;
        int len = s.size();
        int a[150] = {};
        FOR(i, 0, len - 1) a[int(s[i])]++;
        int cnt = 0;
        FOR(i, 97, 122)
        {
            if(a[i] == 0) cnt++;
        }
        if(cnt <= k) cout << 1 << endl;
        else cout << 0 << endl;      
    }
}