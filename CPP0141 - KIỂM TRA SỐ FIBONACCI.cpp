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
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define endl '\n'

ll fibo[93];

int main()
{
    faster();
    fibo[0] = 0;
    fibo[1] = 1;
    FOR(i, 2, 92) fibo[i] = fibo[i - 1] + fibo[i - 2];
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        bool check = false;
        FOR(i, 0, 92)
        {
            if(n == fibo[i])
            {
                check = true;
                break;
            }
        }
        if(check) cout << "YES\n";
        else cout << "NO\n";
    }
}