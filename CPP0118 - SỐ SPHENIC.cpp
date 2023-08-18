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

void solve()
{
    int n; cin >> n;
    int sqr = sqrt(n);
    int cnt = 0;
    FOR(i, 2, sqr)
    {
        if(n % i == 0)
        {
            int check = 0;
            while(n % i == 0) 
            {
                n /= i;
                cnt++;
                check++;
            }
            if(check > 1)
            {
                cout << 0 << endl;
                return;
            }
        }
    }
    if(n > 1) cnt++;
    if(cnt == 3) cout << 1 << endl;
    else cout << 0 << endl;
}

int main()
{
    faster();
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
}