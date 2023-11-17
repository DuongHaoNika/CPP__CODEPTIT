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
    cin.ignore();
    while(t--)
    {
        string p, q;
        getline(cin, p);
        getline(cin, q);
        stringstream ss(q);
        string tmp;
        map<string, int> m;
        while(ss >> tmp) m[tmp]++;
        stringstream sss(p);
        vector<string> v;
        while(sss >> tmp)
        {
            if(m[tmp] == 0)
            {
                v.pb(tmp);
                m[tmp] = 1;
            }
        }
        sort(v.begin(), v.end());
        FOR(i, 0, v.sz - 1) cout << v[i] << ' ';
        cout << endl;
    }
}