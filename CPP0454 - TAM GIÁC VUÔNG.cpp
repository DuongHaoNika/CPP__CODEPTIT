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
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        ll a[n + 5];
        FOR(i, 0, n - 1) 
        {
              cin >> a[i];
              a[i] *= a[i];
        }
        sort(a, a + n);
        int idx = n - 1;
        ll min3 = a[idx];
        bool check = false;
        while(idx >= 2)
        {
            int idx1 = 0, idx2 = idx - 1;
            while(idx1 < idx2)
            {
                ll tmp = a[idx1] + a[idx2];
                if(tmp < min3) idx1++;
                else if(tmp > min3) idx2--;
                else
                {
                    check = true;
                    break;
                }
            }
            min3 = a[--idx];
            if(check) break;
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}