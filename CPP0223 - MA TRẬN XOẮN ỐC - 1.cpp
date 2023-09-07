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
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        int a[n + 5][m + 5];
        FOR(i, 1, n)
        {
            FOR(j, 1, m) cin >> a[i][j];
        }
        vector<int> v;
        int tren = 1, duoi = n, trai = 1, phai = m;
        while(tren <= duoi && trai <= phai)
        {
            for(int i = trai; i <= phai; i++) 
            {
                v.pb(a[tren][i]);
            }
            tren++;
            for(int i = tren; i <= duoi; i++) 
            {
                v.pb(a[i][phai]);
            }
            phai--;
            if(tren <= duoi && trai <= phai)
            {
                for(int i = phai; i >= trai; i--) 
                {
                    v.pb(a[duoi][i]);
                }
                duoi--;
                for(int i = duoi; i >= tren; i--)
                {
                    v.pb(a[i][trai]);
                }
                trai++;
            }
        }
        FOR(i, 0, v.sz - 1) cout << v[i] << " ";
        cout << endl;
    }
}